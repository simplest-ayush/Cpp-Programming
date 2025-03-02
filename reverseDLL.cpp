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

// BRUTE FORCE SOLUTION FOR REVERSING A LINKED LIST
// Node* reverseDLL(Node* head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     stack<int> st;
//     Node* temp=head;
//     while(temp!=NULL){
//         st.push(temp->data);
//         temp=temp->next;
//     }
//     Node* tem=head;
//     while(tem!=NULL){
//         tem->data=st.top();
//         st.pop();
//         tem=tem->next;
//     }
//     return head;
// }

// OPTIMISED SOLUTION FOR REVERSING A LINKED LIST
Node* reverseDLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* last=NULL;
    Node* current=head;
    while(current!=NULL){
        last=current->back;
        current->back=current->next;
        current->next=last;
        current=current->back;
    }
    return last->back;                  //This WILL BE THE NEW HEAD OF THE LINKED LIST
}


int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    Node* head=convertARRtoDLL(arr); 
    head=reverseDLL(head);
    printDLL(head);
    return 0;
}