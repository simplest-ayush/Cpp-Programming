#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int>&arr, int n){
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    set<vector<int>> unique;
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            if((arr[i]+arr[j]+arr[k])==0){
                unique.insert({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if((arr[i]+arr[j]+arr[k])<0){
                j++;
            }
            else if((arr[i]+arr[j]+arr[k])>0){
                k--;
            }
        }
    }
    for(auto triplets: unique){
        ans.push_back(triplets);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter elements of array : ";
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    cout<<"Triplets having sum 0 are : ";
    findTriplets(arr,n);
    return 0;
}