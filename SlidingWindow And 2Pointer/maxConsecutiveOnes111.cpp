#include<bits/stdc++.h>
using namespace std;

int maxOnes(vector<int> &nums, int k){
    int left=0; 
    int right=0; 
    int ans=0;
    int zeros=0;
    while(right<nums.size()){
        if(nums[right]==0){
            zeros++;
            while(zeros>k){
                if(nums[left]==0) zeros--;
                left++;
            }
        }
        if(zeros<=k){
            ans=max(ans, right-left+1);
        }
        right++;
    }
    return ans;


    // MOST OPTIMAL O(N)
        // int left=0;
        // int right=0;
        // int zeros=0;
        // int ans=0;
        // while(right<nums.size()){
        //     if(nums[right]==0) zeros++;
        //     if(zeros>k){
        //         if(nums[left]==0) zeros--;
        //         left++;
        //     }
        //     if(zeros<=k){
        //         ans=max(ans, right-left+1);
        //     }
        //     right++;
        // }
        // return ans;
}

int main(){
    vector<int> nums={1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,0,1,0};
    int k=3;
    cout<<"The maximum length after converting "<<k<<" zeros is : "<<maxOnes(nums, k);
    return 0;
}