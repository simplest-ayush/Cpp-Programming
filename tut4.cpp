#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i;
    int sum=0;
    
    
    
    // for ( i = 2; i <= n; i++)
    // {
    //     if (i%2==0){
    //         sum=sum+i;

    //     }
        
    // }
    
    // cout<<"The sum is : "<<sum;
    while ((i%2==0)&(i<n))
    {
        /* code */
        sum=sum+i;
        i++;
    }
    cout<<sum;

    return 0;
}
