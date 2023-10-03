#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid= (start+end)/2;         // to overcome the overflow of integer (limit of integer)
                                    // use mid= start + (end-start)/2
    
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[100],n,key;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key element to be searched : ";
    cin>>key;
    int index=binarysearch(arr,n,key);
    cout<<"Index of key element is : "<<index;
    return 0;
}