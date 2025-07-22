#include<bits/stdc++.h>
using namespace std;

int maxLen(string &s){
    int n=s.size();
    int left=0;
    int maxLen=0;
    unordered_set<char> charset;
    for(int right=0; right<n; right++){
        while(charset.find(s[right])!=charset.end()){
            charset.erase(s[left]);
            left++;
        }
        charset.insert(s[right]);
        maxLen=max(maxLen, right-left+1);
    }
    return maxLen;
}

int main(){
    string s="cbadzb";
    cout<<"The maximum length without repeating charactrs is : "<<maxLen(s);
    return 0;
}