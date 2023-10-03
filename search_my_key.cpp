#include<iostream>
using namespace std;
int main(){
    long int n;
    cin>>n;
    long int arr[n];
    long int k;
    bool is_found=false;
    int mid=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        long int q;
        cin>>q;
        while(q--){
            cin>>k;
            int low=0;
            int high =n-1;
            while(low<=high){
                mid=low+(high-low)/2;
                if (arr[mid]==k);
                cout<<mid;
                is_found=true;
                break;
                else if (arr[mid]<k)
                low+=1;
                else {
                    high=high-1;
                    }   
                }
        }
        if(is_found)cout<<mid<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}