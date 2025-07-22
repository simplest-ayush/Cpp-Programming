#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& nums, int target){
    int n=nums.size();
    int m=nums[0].size();
    int low=0;
    int high=n*m-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid/m][mid%m]==target){
            return true;
        }
        else if(nums[mid/m][mid%m]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> nums={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchMatrix(nums, 10);
    return 0;
}