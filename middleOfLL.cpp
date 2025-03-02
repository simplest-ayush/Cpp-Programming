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

Node* middleNode(Node* head) {
        // BRUTE FORCE APPROACH 
        // Node* temp=head;
        // int cnt=0;
        // while(temp!=NULL){
        //     cnt++;
        //     temp=temp->next;
        // }
        // int midNode=cnt/2+1;
        // Node* temp1=head;
        // while(temp1!=NULL){
        //     midNode--;
        //     if(midNode==0){
        //         break;
        //     }
        //     temp1=temp1->next;
        // }
        // return temp1;


        // OPTIMAL APPROACH
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

int main(){
    vector<int> arr={1,2,3,4,5,6};
    Node* head=convertArrToDLL(arr);
    head=middleNode(head);
    printDLL(head);
    return 0;
}