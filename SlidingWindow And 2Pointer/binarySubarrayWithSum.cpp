#include <bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int> &nums, int goal)
{
    if (goal < 0)
        return 0;
    int left = 0;
    int right = 0;
    int sum = 0;
    int cnt = 0;
    while (right < nums.size())
    {
        sum += nums[right];
        while (sum > goal)
        {
            sum -= nums[left];
            left++;
        }
        cnt += right - left + 1;
        right++;
    }
    return cnt;
}

int numSubarrayWithSum(vector<int> &nums, int goal)
{
    return countSubarrays(nums, goal) - countSubarrays(nums, goal - 1);
}

int main()
{
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal=2;
    cout<<"The number of subarrays whose sum is equal to goal are : "<<numSubarrayWithSum(nums, goal);
    return 0;
}