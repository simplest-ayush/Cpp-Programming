#include<iostream>
using namespace std;
long maxixumSubarraySum(int arr[],int n){
    long long sum=0,maxi=INT64_MIN;
    int ansStart=-1;
    int ansEnd=-1;
    int start=0;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    if(maxi<0){
        return {};
    }
    return maxi;
}
int main(){
    int arr[100],n;
    cout<<"Enter Size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maxixum Subarray Sum is : "<<maxixumSubarraySum(arr,n);
    return 0;
}