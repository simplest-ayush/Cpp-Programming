#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] > nums[mid + 1])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> nums = {3, 4, 5, 13, 1, 2};
    cout << "The peak element in the given vector is : " << findPeak(nums);
    return 0;
}