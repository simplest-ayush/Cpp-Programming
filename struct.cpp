#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int id;
    char favchar;
    float salary;
}ep;

int main(){
    ep ayush;        //we can use ep instead of struct employee
    ayush.id=001;
    ayush.favchar='y';
    ayush.salary=35000;
    cout<<ayush.id<<endl;
    cout<<ayush.favchar<<endl;
    cout<<ayush.salary<<endl;
    return 0;
}