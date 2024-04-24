#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
};
int main(){
    vector<int> arr={1,2,3,4,5};
    // Node *y=new Node(arr[1],nullptr);
    // cout<<y;

    Node y=Node(arr[1],nullptr);
    cout<<y.data<<'\n';
    cout<<y.next;
    return 0;
}