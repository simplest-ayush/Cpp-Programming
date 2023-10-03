#include<iostream>
using namespace std;

void slection(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        swap(arr[min],arr[i]);
    }
}
int main(){
    int arr[100],n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    slection(arr,n);
    cout<<"Array after sorting is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}    