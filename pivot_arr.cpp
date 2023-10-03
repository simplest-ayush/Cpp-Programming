#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else
        e=mid;
        mid=s+(e-s)/2;
    }
    cout<<"Pivot element is : "<<arr[s];
    return 0;
}