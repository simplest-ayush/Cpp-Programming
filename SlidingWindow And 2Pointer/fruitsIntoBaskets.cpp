#include<bits/stdc++.h>
using namespace std;

int maxFruits(vector<int> &nums){
    // O(2N)
    // int left=0;
    // int right=0;
    // int ans=0;
    // map<int, int> mpp;
    // while(right<nums.size()){
    //     mpp[nums[right]]++;
    //     if(mpp.size()>2){
    //         while(mpp.size()>2){
    //             mpp[nums[left]]--;
    //             if(mpp[nums[left]]==0){
    //                 mpp.erase(nums[left]);
    //             }
    //             left++;
    //         }
    //     }
    //     if(mpp.size()<=2){
    //         ans=max(ans, right-left+1);
    //     }
    //     right++;
    // }
    // return ans;

    // MOST OPTIMAL SOLUTION  O(N)
    int left=0; 
    int right=0;
    int ans=0;
    map<int, int> mpp;
    while(right<nums.size()){
        mpp[nums[right]]++;
        if(mpp.size()>2){
            mpp[nums[left]]--;
            if(mpp[nums[left]]==0){
                mpp.erase(nums[left]);
            }
            left++;
        }
        if(mpp.size()<=2){
            ans=max(ans, right-left+1);
        }
        right++;
    }
    return ans;
}

int main(){
    vector<int> nums={3,3,2,2,3,3,3,4,3};
    cout<<"The maximum fruits that can fit into two baskets are : "<<maxFruits(nums);
    return 0;
}