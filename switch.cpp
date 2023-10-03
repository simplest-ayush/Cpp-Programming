#include<iostream>
using namespace std;
int main(){
    char op;
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    cout<<"Enter the operator (+,-,/,*) : ";
    cin>>op;
    switch(op){
        case '+':
        cout<<"Sum of a and b is : "<<(a+b)<<endl;
        break;
        case '-':
        cout<<"Difference of a and b is : "<<(a-b)<<endl;
        break;
        case '*':
        cout<<"Multiply of a and b is : "<<(a*b)<<endl;
        break;
        case '/':
        cout<<"Divosion of a and b is : "<<(a/b)<<endl;
        break;
        default:
        cout<<"Enter the correct operator ";
    }
    return 0;
}