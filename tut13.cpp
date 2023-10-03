#include<iostream>
using namespace std;
// Function prototype
// int sum(int a,int b);   --------->Acceptable 
// int sum(int a, b);   --------->Not Acceptable 
// int sum(int ,int );     --------->Acceptable 

int main(){
    int num1,num2;
    cout<<"Enter the value of num1 : " ;
    cin>>num1;
    cout<<"Enter the value of num2 : " ;
    cin>>num2;
    cout<<"The sum of num1 and num2 is : "<<sum(num1,num2);
    // num1 and num2 are actual parameters
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    // a and b are formal parameters
    return c;
}
