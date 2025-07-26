#include<bits/stdc++.h>
using namespace std;

int characterReplacement(string &s, int k){
    int ans=0; 
    int maxFreq=0;
    int left=0;
    int right=0;
    int hash[26]={0};
    while(right<s.size()){
        hash[s[right]-'A']++;
        maxFreq=max(maxFreq, hash[s[right]-'A']);
        if((right-left+1)-maxFreq>k){
            hash[s[left]-'A']--;
            // maxFreq=0;
            // for(int i=0; i<26; i++){       //this was taking extra itme complexity
            //     maxFreq=max(maxFreq, hash[i]);
            // }
            left++;
        }
        if((right-left+1)-maxFreq<=k){
            ans=max(ans, right-left+1);
        }
        right++;
    }
    return ans;
}

int main(){
    string s="AABABBAC";
    int k=2;
    cout<<"The length of the longest substring containing the same letter you can get after performing at most "<<k<<" replacements is : "<<characterReplacement(s, k);
    return 0;
}