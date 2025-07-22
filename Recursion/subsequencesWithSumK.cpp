#include<bits/stdc++.h>
using namespace std;

void subsequenceWithSumK(int i, vector<int> &ds, int s, int sum, vector<int> &arr, int n){
    if(i==n){
        if(s==sum){
            for(auto it: ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    subsequenceWithSumK(i+1, ds, s, sum, arr, n);
    ds.pop_back();
    s-=arr[i];
    subsequenceWithSumK(i+1, ds, s, sum, arr, n);
}

int main(){
    vector<int> arr={1, 2, 1};
    int n=arr.size();
    int sum=2;
    vector<int> ds;
    subsequenceWithSumK(0, ds, 0, sum, arr, n);
    return 0;
}