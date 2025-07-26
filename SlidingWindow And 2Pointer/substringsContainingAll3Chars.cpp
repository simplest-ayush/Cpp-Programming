#include<bits/stdc++.h>
using namespace std;

int numberOfSubstring(string &s){
    int cnt=0;
    int lastSeen[3]={-1, -1, -1};
    for(int i=0; i<s.size(); i++){
        lastSeen[s[i]-'a']=i;
        if(lastSeen[0]!=-1 && lastSeen[1]!=-1 && lastSeen[2]!=-1){
            int res=*std::min_element(lastSeen, lastSeen + 3);
            cnt+=1+res;
        }
    }
    return cnt;
}

int main(){
    string s="abcc";
    cout<<"The number of substrings containing atleast one occurance of a, b and c are : "<<numberOfSubstring(s);
    return 0;
}