#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"The elements of array are : "<<endl;
    for (int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    int ans=0;
    for (int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<" The unique element is : "<<ans;
return 0;
}