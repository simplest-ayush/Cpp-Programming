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

// DELETING HEAD OF A DOUBLY LINKED LIST
Node* deleteHead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}

// DELETING TAIL OF A DOUBLY LINKED LIST
Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node* prev=tail->back;
    tail->next=nullptr;
    prev->next=nullptr;
    delete tail;
    return head;
}

// DELETING Kth NODE OF A DOUBLY LINKED LIST
Node* deleteKthNode(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            break;
        }
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;
    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deleteHead(head);
    }
    else if(front==NULL){
        return deleteTail(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}


// DELETING A PARTICULAR NODE OF A DOUBLY LINKED LIST
// It is guaranteed that the given node will never be the head of the linked list because if delete the head,the head will change
void deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;
    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return;
    }
    prev->next=front;
    front->back=prev;
    temp->next=temp->back=nullptr;
    delete temp;
}




// INSERTIONS IN A LINKED LIST

// INSERTION BEFORE HEAD
Node* insertBeforeHead(Node* head,int val){
    Node* newHead=new Node(val,head,nullptr);
    head->back=newHead;
    return newHead;
}

// INSERTION BEFORE TAIL
Node* insertBeforeTail(Node* head,int val){
    if(head->next==NULL){
        return insertBeforeHead(head,val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode=new Node(val,temp,prev);
    temp->back=newNode;
    prev->next=newNode;
    return head;
}

// INSERTION BEFORE Kht NODE
Node* insertBeforeKthNode(Node* head,int val,int k){
    if(k==1){
        return insertBeforeHead(head,val);
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            break;
        }
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode=new Node(val,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}


// INSERTION BEFORE A PARTICULAR NODE
void insertBeforeNode(Node* node,int val){
    Node* prev=node->back;
    Node* newNode=new Node(val,node,prev);
    prev->next=newNode;
    node->back=newNode;
}

int main(){
    vector<int> arr={1,3,5,7,9};
    Node* head=convertARRtoDLL(arr); 
    // DELETIONS

    // head=deleteHead(head);                       //deleting head
    // head=deleteTail(head);                       //deleting tail
    // head=deleteKthNode(head,5);                  //deleting Kth Node
    // deleteNode(head->next->next);

    // INSERTIONS
    // head=insertBeforeHead(head,17);
    // head=insertBeforeTail(head,29);
    // head=insertBeforeKthNode(head,56,5);
    insertBeforeNode(head->next->next,77);

    printDLL(head);
    return 0;
}