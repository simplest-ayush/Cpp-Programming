#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(tolowercase(a[s])!=tolowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int length(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++)
        count++;
    return count;    
}

int main(){
    char name[20];
    cout<<"Enter your name : ";
    cin.getline(name,20,'!'); //reads the whole line of input
    cout<<"Your name is : "<<name<<endl;
    int len=length(name);
    cout<<"Length of your name is : "<<len<<endl;
    reverse(name,len);
    cout<<"Name after reversing is : "<<name<<endl;
    cout<<"Palindrome or not : "<<checkPalindrome(name,len);
    return 0;
}