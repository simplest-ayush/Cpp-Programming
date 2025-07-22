#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    int left;
    int right;
    Node(int x){
        val=x;
        left=nullptr;
        right=nullptr;
    }
}

void inorder(Node* root, vector<int> &ans){
    if(root==NULL) return;
    inorder(root->left, ans);
    ans.push_back(root->val);
    inorder(root->right, ans);
}

int main(){
    
    vector<int> ans;
    inorder()
    return 0;
}