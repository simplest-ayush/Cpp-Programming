#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[],int s,int e,int target){
    int st=s;
    int end=e;
    int mid=st+(end-st)/2;
    while(st<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            st=mid+1;
        }
        else if(arr[mid]<target){
            end=mid-1;
        }
        mid=st+(end-st)/2;
    }
    return -1;
}

int main(){
    int arr[100],n,target;
    cout<<"Enter Size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be searched : ";
    cin>>target;
    int pivot=getPivot(arr,n);
    if(target>=arr[pivot] && target<arr[n-1]){
        cout<<binarySearch(arr,pivot,n-1,target);
    }
    else{
        cout<<binarySearch(arr,0,pivot-1,target);
    }
    return 0;
}