#include<bits/stdc++.h>
using namespace std;

int subarrayXOR(vector<int> &arr, int k){
    int cnt=0;
    int XR=0;
    map<int, int> mp;
    mp[0]=1;
    for(int i=0; i<arr.size(); i++){
        XR^=arr[i];
        int x=XR^k;
        cnt+=mp[x];
        mp[XR]+=1;
    }
    return cnt;
}

int main(){
    vector<int> arr={5, 6, 7, 8, 9};
    cout<<"Number of subarrays having XOR as k are : "<<subarrayXOR(arr, 5); 
    return 0;
}