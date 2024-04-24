#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter elements of array : ";
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    cout<<"Enter value of k : ";
    cin>>k;

    //                                 BRUTE FORCE
/*
    vector<int> temp(k);
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[i]=arr[i+k];
    }
    int j=0;
    for(int i=k;i<n;i++){
        arr[i]=temp[j];
        j++;
    }
*/

//                                 ANOTHER APPROACH
    // vector<int> temp(n);
    // for(int i=0;i<n;i++){
    //     temp[(i+k)%n]=arr[i];
    // }
    // arr=temp;
    //                            OPTIMAL METHOD
    reverse(arr.end()-k,arr.end());
    reverse(arr.begin(),arr.end()-k);
    reverse(arr.begin(),arr.end());
    cout<<"Array after rotating right : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}