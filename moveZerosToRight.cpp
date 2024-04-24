#include<iostream>
#include<vector>
using namespace std;
// brute force method
/*
vector<int> moveZeros(vector<int> &arr,int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int x=temp.size();
    for(int i=0;i<x;i++){
        arr[i]=temp[i];
    }
    for(int i=x;i<n;i++){
        arr[i]=0;
    }
    return arr;
}
*/

// optimal method
void moveZerosToEnd(vector<int> &arr,int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return ;
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter elements of array : ";
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    // moveZeros(arr,n);               BRUTE FORCE
    moveZerosToEnd(arr,n);
    cout<<"After moving zeros to end : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}