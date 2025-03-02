#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convert2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* reverse(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

bool checkPalindrome(Node* head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* newHead=reverse(slow->next);
    Node* first=head;
    Node* second=newHead;
    while(second!=NULL){
        if(first->data!=second->data){
            reverse(newHead);
            return false;
        }
        first=first->next;
        second=second->next;
    }
    reverse(newHead);
    return true;
}

int main(){
    vector<int> arr={1,2,3,4,3,2,1};
    Node* head=convert2LL(arr);
    bool a=checkPalindrome(head);
    cout<<a;
    // printLL(head);
    return 0;
}