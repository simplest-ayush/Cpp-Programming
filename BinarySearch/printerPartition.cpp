#include<bits/stdc++.h>
using namespace std;
int totalSum(vector<int>& nums){
    int sum=0; 
    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
    }
    return sum;
}

int findMax(vector<int>& nums){
    int maxi=INT_MIN;
    for(int i=0; i<nums.size(); i++){
        maxi=max(maxi, nums[i]);
    }
    return maxi;
}

int countPrinter(vector<int>& nums, int area){
    int printers=1;
    int totalArea=0;
    for(int i=0; i<nums.size(); i++){
        if(totalArea+nums[i]<=area){
            totalArea+=nums[i];
        }
        else{
            printers++;
            totalArea=nums[i];
        }
    }
    return printers;
}

int findPrinter(vector<int>& nums, int printer){
    int low=findMax(nums);
    int high=totalSum(nums);
    while (low<=high){
        int mid=low+(high-low)/2;
        int cntPrinter=countPrinter(nums, mid);
        if(cntPrinter>printer){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}

int main(){
    vector<int> nums={2, 1, 5, 6, 2, 3};
    int printers=2;
    cout<<findPrinter(nums, printers);
    return 0;
}