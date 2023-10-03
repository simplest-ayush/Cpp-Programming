#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the Character : ";
    cin>>ch;
    if ((ch>='a')&(ch<='z')){
        cout<<"Character is lowercase ";
    }
    else if ((ch>='A')&(ch<='Z'))
    {
        cout<<"Character is Uppercase ";
    }
    else{
        cout<<"Character is Numeric ";
    }
    
    return 0;
}