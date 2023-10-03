#include<iostream>
using namespace std;
int main(){
    int a=1;
    int m;
    cout<<"Enter value of m : ";
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        arr[i]=a++;
    }
    int array[7]={1, 2, 5, 6, 7, 8, 9};
    for(int i=0;i<m;i++){
        if(arr[i]!=array[i]){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}