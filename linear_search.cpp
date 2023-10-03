#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
int main(){
    int arr[100],size,key;
    cout<<"Enter size of array : "<<endl;
    cin>>size;
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<size;i++)
    cin>>arr[i];
    cout<<"Enter key element to search for : "<<endl;
    cin>>key;
    bool found=search(arr,size,key);
    if(found)
    cout<<"Present"<<endl;
    else
    cout<<"Absent"<<endl;
    return 0;
}
