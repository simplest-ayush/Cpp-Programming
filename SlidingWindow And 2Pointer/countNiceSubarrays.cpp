#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> &nums, int k)
{
    int left = 0;
    int right = 0;
    int cnt = 0;
    int sum = 0;
    while (right < nums.size())
    {
        sum += nums[right] % 2;
        while (sum > k)
        {
            sum -= nums[left];
            left++;
        }
        cnt += right - left + 1;
        right++;
    }
    return cnt;
}

int countSubarrays(vector<int> &nums, int k)
{
    return helper(nums, k) - helper(nums, k - 1);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3;
    cout << "The number of subarrays that contain " << k << " odd numbers are : " << countSubarrays(nums, k);
    return 0;
}