//                                                REVERSING AN ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10],n;
//     cout<<"Enter size of array : ";
//     cin>>n;
//     cout<<"Enter elements of array : ";
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     cout<<"The elements of array : ";
//     for(int i=0;i<n;i++){
//     cout<<" "<<arr[i];
//     }
//     cout<<endl;
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
//     cout<<"The elements of array after reversing are: ";
//     for(int i=0;i<n;i++)
//     cout<<" "<<arr[i];
//     return 0;
// }

//                                    REVERSING ALTERNATE ELEMENTS OF AN ARRAY
#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"The elements of array : ";
    for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
    }  
    cout<<endl;
    int a=0;
    int b=1;
    while((a<=(n-2))&&(b<=(n-1))){
        swap(arr[a],arr[b]);
        a+=2;
        b+=2;
    }
    cout<<"The elements of array after reversing are: ";
    for(int i=0;i<n;i++)
    cout<<" "<<arr[i];
    return 0;
}

