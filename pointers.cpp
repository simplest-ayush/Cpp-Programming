#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *b=&a;
    // &---> (Address of) operator
    // *---> (Value at) Dereference operator
    cout<<"The address of b is : "<<b<<endl;
    cout<<"The value at b is : "<<*b<<endl;

    // Pointer to pointer
    int **c=&b;
    cout<<"The address of c is : "<<c<<endl;
    cout<<"The value at c is : "<<*c<<endl;
    return 0;
}