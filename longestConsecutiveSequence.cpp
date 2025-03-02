#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> nums){
    int n=nums.size();
    if(n==0){
        return 0;
    }
    sort(nums.begin(), nums.end());
    int count=0;
    int longest=1;
    int lastSmallest=INT_MIN;
    for(int i=0; i<n; i++){
        if(nums[i]-1==lastSmallest){
            count+=1;
            lastSmallest=nums[i];
        }
        else if(nums[i]!=lastSmallest){
            count=1;
            lastSmallest=nums[i];
        }
        longest=max(longest, count);
    }
    return longest;
}

int main(){
    vector<int> nums={100,4,200,1,3,2};
    cout<<"Longest consecutive sequence is : "<<longestConsecutive(nums); 
    return 0;
}