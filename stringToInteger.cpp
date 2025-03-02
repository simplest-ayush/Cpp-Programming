#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s){
    if(s.size()==0) return 0;
    long ans=0;
    int sign=1;
    int i=0;
    while(i<s.size() && s[i]==' '){
        i++;
    }

    s=s.substr(i);
    if(s[0]=='-'){
        sign=-1;
    }
    i=(s[0]=='+' || s[0]=='-') ? 1 : 0; 
    int MIN=INT_MIN, MAX=INT_MAX;

    for(int j=i; j<s.size(); j++){
        if(s[j]==' ' || !isdigit(s[j])) break;
        ans=ans*10+(s[j]-'0');
        if(sign==-1 && -1*ans<MIN) return MIN;
        if(sign==1 && ans>MAX) return MAX;
    }
    return ans*sign;
}

int main(){
    string s="      +0000000765432";
    int ans=myAtoi(s);
    cout<<"String after converting to integer is : "<<ans;
    return 0;
}