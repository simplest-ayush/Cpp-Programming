#include<iostream>
#include<vector>
using namespace std;
int maxConsecutiveOnes(vector<int> arr,int n){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter Size of vector : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter elements of vector : ";
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    cout<<"Maxixum consecutive ones are : "<<maxConsecutiveOnes(arr,n);
    return 0;
}