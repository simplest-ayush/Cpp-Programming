#include <bits/stdc++.h>
using namespace std;

// this will be the better approach for the array containing positives, negatives and zeros
// if the array contains only positives then there will be a optimal solution
int longestSubarray(vector<int> &nums, int k)
{
    int n = nums.size();
    long long sum = 0;
    int maxLen = 0;
    map<long long, int> mpp;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (mpp.find(rem) != mpp.end())
        {
            int len = i - mpp[rem];
            maxLen = max(maxLen, len);
        }
        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }
    return maxLen;
}

// optimal solution for arrays containing only positives
int longestSubarrayContainingPositivesOnly(vector<int> &nums, int k)
{
    int n = nums.size();
    long long sum = nums[0];
    int maxLen = 0;
    int left = 0;
    int right = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= nums[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum += nums[right];
        }
    }
    return maxLen;
}

int main()
{
    vector<int> arr = {94, -33, -13, 40, -82, 94, -33, -13, 40, -82};
    int k = 52;
    int maxLen = longestSubarray(arr, k);
    cout << "Length of Maxixum Subarray with sum " << k << " is " << maxLen<<'\n';
    
    vector<int> a={1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 9, 6, 6, 4, 7, 9, 5, 4, 3, 2, 8, 1, 6, 5, 7, 8 };
    int k1=15;
    int len=longestSubarrayContainingPositivesOnly(a, k1);
    cout << "Length of Maxixum Subarray with sum " << k1 << " is " << len<<'\n';
    return 0;
}