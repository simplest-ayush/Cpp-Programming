#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pivot=-1;
    int rightSum=0;
    int leftSum=0;
    for(int i=0;i<n;i++){
        rightSum+=arr[i];
    }
    for(int i=0;i<n;i++){
        rightSum-=arr[i];
        if(leftSum==rightSum){
            pivot=i;
            break;
        }
        else{
            leftSum+=arr[i];
        }
    }
    cout<<"Pivot Index is : "<<pivot;
    return 0;
}