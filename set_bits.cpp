#include<iostream>
using namespace std;
int main(){
    unsigned int n;
    cout<<"Enter any number : ";
    cin>>n;
    int count =0;
    while(n!=0) {
        if (n&1)
            count++;
        n=n>>1;
    }
    cout<<"The number of set bits in the given no. are : "<<count;
    return 0;
}