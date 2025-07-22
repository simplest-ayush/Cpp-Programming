#include<bits/stdc++.h>
using namespace std;

void rev(int i, vector<int> &arr, int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    rev(i+1, arr, n);
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    rev(0, arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
