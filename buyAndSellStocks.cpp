#include<bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> nums){
    int n=nums.size();
    int maxProfit=0;
    int minPrice=nums[0];
    for(int i=1; i<n; i++){
        minPrice=min(minPrice, nums[i]);
        maxProfit=max(maxProfit, nums[i]-minPrice);
    }
    return maxProfit;
}

int main(){
    vector<int> nums={7, 1, 5, 3, 6, 4};
    cout<<"Maxixum Profit is : "<<maximumProfit(nums);
    return 0;
}