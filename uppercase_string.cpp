#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        int low=0;
        int high=n-1;
        bool is_found=false;
        int mid=0;
        while(low<=high){
            mid =low+(high-low)/2;
            if (arr[mid]==k)
            cout<<mid<<endl;
            is_found=true;
            break;

        }
    }

        else if (arr[mid]<k) low=mid+1;
        else {
            high=high-1;
        }
    if(is_found)cout<<mid<<endl;
    else cout<<'-1'<<endl;

    return 0;
}