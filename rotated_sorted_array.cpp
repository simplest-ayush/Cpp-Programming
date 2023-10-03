#include<vector>
#include<iostream>
using namespace std;
int getpivot(vector<int>& arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;        
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binary(vector<int>& arr,int s,int e,int k){
    int st=s;
    int end=e;
    int mid=st+(end-st)/2;
    while(st<=end){
        if(arr[mid]==k){
            return mid;
        }
        else if(k>arr[mid]){
            st=mid+1;
        }
        else if(k<arr[mid]){
            end=mid-1;
        }
        mid=st+(end-st)/2;
    }
    return -1;
}
int search(vector<int>& arr, int n, int k)
{
    int pivot=getpivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binary(arr, pivot,n-1,k);
    }
    else{
        return binary(arr,0,(pivot-1), k);
    }

}
