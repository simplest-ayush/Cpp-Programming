#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b=a;
        }
    }
    return a;
}

//                                                 this is EUCLIDEAN ALGORITHM

int main(){
    int a,b;
    cout<<"Enter value of a and b : ";
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"GCD of a and b is : "<<ans;
    return 0;
}