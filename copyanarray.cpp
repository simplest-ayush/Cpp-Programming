#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the element of first array : ";
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Elements of first array are : \n";
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for (int i=0;i<n;i++){
        b[i]=a[i];
    }
    cout<<"Elements of second array are : \n";
    for (int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}