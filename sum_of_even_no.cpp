#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i=2;
    int sum=0;
    
    
    
    // for ( i = 2; i <= n; i++)
    // {
    //     if (i%2==0){
    //         sum=sum+i;

    //     }
        
    // }
    
    // cout<<"The sum is : "<<sum;
    
    
    
    
    // while (i<n)
    // {
    //     /* code */
    //     if (i%2==0){
    //         sum=sum+i;
            
    //     }
    //     i++;
        
    // }
    // cout<<"The sum is : "<<sum;



    do
    {
        /* code */
        if (i%2==0){
            sum=sum+i;
            
        }   
        i++;
        
    } while (i<n);
    cout<<"The sum is : "<<sum;
    
    return 0;
}
