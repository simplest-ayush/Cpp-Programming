#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int solve(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}


long sum(int n){
    long s=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            s+=i;
        }
    }
    return s;
}
int sumFourDivisors(int arr[], int n)
{
    int c,s=0;
    for(int i=0;i<n;i++){
        c=solve(arr[i]);
        if(c==4){
            s+=sum(arr[i]);
        }
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans =sumFourDivisors(arr,n);
    cout<<ans;
}

