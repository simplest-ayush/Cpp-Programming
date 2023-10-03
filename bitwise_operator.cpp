#include<iostream>
using namespace std;
int main(){
    int a=3;
    int b=5;
    cout<<"a and b : "<<(a&b)<<endl; //And opeartor 
    cout<<"a or b : "<<(a|b)<<endl; //Or operator 
    cout<<"not a : "<<(~a)<<endl;  //Not operator
    cout<<"a XOR b : "<<(a^b)<<endl; //XOR operator
    cout<<(15<<2)<<endl;//left shift 
    cout<<(15<<1)<<endl;//left shift
    cout<<(19>>2)<<endl;//right shift
    cout<<(17>>1)<<endl;//right shift
    return 0;
}