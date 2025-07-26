#include<bits/stdc++.h>
using namespace std;

int getLengthofLongestSubstring(string &s, int k){
    int ans=0;
    int left=0;
    int right=0;
    map<char, int> mpp;
    while(right<s.size()){
        mpp[s[right]]++;
        if(mpp.size()>k){
            while(mpp.size()>k){
                mpp[s[left]]--;
                if(mpp[s[left]]==0){
                    mpp.erase(s[left]);
                }
                left++;
            }
        }
        if(mpp.size()<=k){
            ans=max(ans, right-left+1);
        }
        right++;
    }
    return ans;
}

int main(){
    string s="aabacbebebe";
    int k=3;
    cout<<"The longest substring with exactly "<<k<<" distinct characters is : "<<getLengthofLongestSubstring(s, k);
    return 0;
}