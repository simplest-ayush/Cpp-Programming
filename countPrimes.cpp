#include<iostream>
#include<vector>
using namespace std;
int countPrimes(int n){
    int cnt=0;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            cnt++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=0;
            }
        }
    }
    return cnt;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"No. of prime numbers upto n are : "<<countPrimes(n);
    return 0;
}