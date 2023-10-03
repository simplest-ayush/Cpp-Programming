#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    int sum=0;
    while(i<=n){
        
        sum =sum +(i*i);            
    
        i=i+2;
    }
        cout<<sum<<endl;
    // for(i=1;i<=n;i=i+2){
    //     sum=sum+(i*i);
        
    // }
    // cout<<sum<<endl;
    return 0;
}