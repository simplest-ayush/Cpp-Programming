#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    cout<<"Enter the number for which you wish to find the fibonacci number : ";
    cin>>n;    
    cout<<"The fibonacci number is : "<<fibo(n);
    return 0;
}