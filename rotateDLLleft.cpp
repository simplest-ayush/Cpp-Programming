#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convertARRtoDLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=prev->next;
    }
    return head;
}

void printDLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* rotateDLLToLeft(Node* head,int k){
    if(k==0){
        return head;
    }
    Node* current=head;
    int cnt=1;
    while(cnt<k && current!=NULL){
        current=current->next;
        cnt++;
    }
    if(current==NULL){
        return head;
    }
    Node* kthNode=current;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=head;
    head=kthNode->next;
    kthNode->next=NULL;
    return head;
}


int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=convertARRtoDLL(arr); 
    head=rotateDLLToLeft(head,3);
    printDLL(head);
    return 0;
}