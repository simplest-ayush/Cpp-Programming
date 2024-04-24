#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partitionArray(int input[], int start, int end){
    int pivot=input[start];
    int i=start;
    int j=end;
    while(i<j){
        while(input[i]<=pivot && i<=end-1){
            i++;
        }
        while(input[j]>pivot && j>=start+1){
            j--;
        }
        if(i<j){
            swap(input[i],input[j]);
        }
    }
    swap(input[start],input[j]);
    return j;
}

void quickSort(int input[], int start, int end){
    if(start<end){
        int partitionIndex=partitionArray(input,start,end);
        quickSort(input,start,partitionIndex-1);
        quickSort(input,partitionIndex+1,end);
    }
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of the array : ";
    int a;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    // function calling
    quickSort(arr,0,n-1);


    cout<<"Array after sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}