#include<bits/stdc++.h>
using namespace std;

void mergeSortedArray(vector<int> &arr1, int n, vector<int> &arr2, int m){
    int i=n-1;
    int j=m-1;
    int k=n+m-1;
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k]=arr1[i];
            i--;
            k--;
        }
        else{
            arr1[k]=arr2[j];
            j--;
            k--;
        }
    }
    while(j>=0){
        arr1[k]=arr2[j];
        j--;
        k--;
    }
}

int main(){
    vector<int> arr1={4, 5, 6, 0, 0, 0};
    vector<int> arr2={1, 2, 3};
    cout<<"Arrays after merging are : "<<'\n';
    mergeSortedArray(arr1, 3, arr2, 3);
    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}