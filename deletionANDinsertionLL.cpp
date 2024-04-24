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


// CONVERTING ARRAY TO LINKED LIST
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

// PRINTING LINKED LIST
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// DELETING HEAD
Node* deleteHead(Node* head){
    if(head==NULL){
        return head;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}


// DELETING LAST NODE 
Node* deleteLast(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}


// DELETING Kth NODE
Node* deletek(Node* head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* previous=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            previous->next=previous->next->next;
            free(temp);
            break;
        }
        previous=temp;
        temp=temp->next;
    }
    return head;
}



// DELETING WITH A VALUE
Node* deleteValue(Node* head,int element){
    if(head==NULL){
        return head;
    }
    if(head->data==element){
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* previous=NULL;
    while(temp!=NULL){
        if(temp->data==element){
            previous->next=previous->next->next;
            free(temp);
            break;
        }
        previous=temp;
        temp=temp->next;
    }
    return head;
}

// INSERTION AT HEAD
Node* insertHead(Node* head,int val){
    return new Node(val,head);
}

// INSERTION AT TAIL
Node* insertTail(Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}


// INSERTION AT A POSITION
Node* insertPosition(Node* head,int val,int k){
    if(head==NULL){
        if(k==1){
            return new Node(val);
        }
        else{
            return head;
        }
    }
    if(k==1){
        return new Node(val,head);
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            Node* x=new Node(val,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }  
    return head;
}

int main(){
    vector<int> arr={2,3,4,5,6};
    Node* head=convert2LL(arr);
    // head=deleteHead(head);                             //DELETE HEAD
    // head=deleteLast(head);                             //DELETE LAST NODE
    // head=deletek(head,4);                              //DELETE Kth NODE  
    // head=deleteValue(head,3);                          //DELETE A VALUE

    // head=insertHead(head,8798);                        //INSERT AT HEAD
    // head=insertTail(head,100);                         //INSERT AT TAIL  
    head=insertPosition(head,100,5);                   //INSERT AT POSITION  
    printLL(head);
    return 0;
}