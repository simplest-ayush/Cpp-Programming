#include<bits/stdc++.h>
using namespace std;

bool anySubsequenceWithSumK(int i, vector<int> &ds, int s, int sum, vector<int> &arr, int n){
    if(i==n){
        if(s==sum){
            for(auto it: ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        else return false;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    if(anySubsequenceWithSumK(i+1, ds, s, sum, arr, n)==true) return true;
    ds.pop_back();
    s-=arr[i];
    if(anySubsequenceWithSumK(i+1, ds, s, sum, arr, n)==true) return true;
    return false;
} 

int main(){
    vector<int> arr={1, 2, 1};
    int n=arr.size();
    int sum=2;
    vector<int> ds;
    anySubsequenceWithSumK(0, ds, 0, sum, arr, n);
    return 0;
}