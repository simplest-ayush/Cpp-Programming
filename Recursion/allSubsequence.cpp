#include<bits/stdc++.h>
using namespace std;

void printAllSubsequences(int i, vector<int> &arr, vector<int> &ds, int n){
    if(i==n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[i]);
    printAllSubsequences(i+1, arr, ds, n);
    ds.pop_back();
    printAllSubsequences(i+1, arr, ds, n);
}

int main(){
    vector<int> arr={3, 1, 2};
    int n=arr.size();
    vector<int> ds;
    printAllSubsequences(0, arr, ds, n);
    return 0;
}