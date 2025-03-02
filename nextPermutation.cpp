#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> nextPermutation(vector<int> nums){
    int n=nums.size();
    int index=-1;
    for(int i=n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(nums.begin(), nums.end());
        return nums;
    }
    for(int i=n-1; i>=index; i--){
        if(nums[i]>nums[index]){
            swap(nums[i], nums[index]);
            break;
        }
    }
    reverse(nums.begin()+index+1, nums.end());
    return nums;
}

int main(){
    vector<int> nums={1, 2, 3, 4, 5, 6};
    vector<int> result=nextPermutation(nums);
    cout<<"Next greater permutation will be : ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}