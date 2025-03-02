#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }

    public:
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
};

Node* convertArrToDLL(vector<int> &arr){
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
// BRUTE FORCE APPROACH
Node* sortLinkedList(Node* head){
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            cnt0++;
        }
        else if(temp->data==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
        temp=temp->next;
    }
    Node* temp1=head;
    while(temp1!=NULL){
        if(cnt0){
            temp1->data=0;
            cnt0--;
        }
        else if(cnt1){
            temp1->data=1;
            cnt1--;
        }
        else{
            temp1->data=2;
            cnt2--;
        }
        temp1=temp1->next;
    }
    return head;
}

//OPTIMAL SOLUTION 
// Node* sortLinkedList(Node* head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     Node* temp=head;
//     Node* zeroHead=new Node(-1);
//     Node* oneHead=new Node(-1);
//     Node* twoHead=new Node(-1);
//     Node* zero=zeroHead;
//     Node* one=oneHead;
//     Node* two=twoHead;
//     while(temp!=NULL){
//         if(temp->data==0){
//             zero->next=temp;
//             zero=temp;
//         }
//         else if(temp->data==1){
//             one->next=temp;
//             one=temp;
//         }
//         else{
//             two->next=temp;
//             two=temp;
//         }
//         temp=temp->next;
//     }
//     zero->next=(oneHead->next)?oneHead->next:twoHead->next;
//     one->next=twoHead->next;
//     two->next=NULL;

//     Node* newHead=zeroHead->next;
//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;
//     return newHead;
// }

int main(){
    vector<int> arr={0,0,0,2,2,1,2,1,0};
    Node* head=convertArrToDLL(arr);
    head=sortLinkedList(head);
    printDLL(head);
    return 0;
}