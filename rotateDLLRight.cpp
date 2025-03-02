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


Node* rotateDLLRight(Node* head,int k){
    if(head==NULL || head->next==NULL){
        return head;
    }
    if(k==0){
        return head;
    }
    Node* temp=head;
    int size=1;
    while(temp->next!=NULL){
        size++;
        temp=temp->next;
    }
    k=k%size;
    int x=size-k;
    Node* kthNode=head;
    while(x>0 && kthNode!=NULL){
        x--;
        kthNode=kthNode->next;
    }
    kthNode=kthNode->back;
    temp->next=head;
    head=kthNode->next;
    kthNode->next=NULL;
    return head;
}
int main(){
    vector<int> arr={0,1,2};
    Node* head=convertARRtoDLL(arr); 
    head=rotateDLLRight(head,4);
    printDLL(head);
    return 0;
}