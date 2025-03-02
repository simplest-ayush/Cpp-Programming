// moore's voting algorithm to find the majority element in an array

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> nums)
{
    int n = nums.size();
    int cnt = 0;
    int element;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            element = nums[i];
        }
        if (nums[i] == element)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == element)
        {
            cnt1++;
        }
    }
    if (cnt1 > n / 2)
    {
        return element;
    }
    return -1;
}

int main()
{
    vector<int> nums = {7, 7, 5, 5, 5, 7, 7, 7, 6, 7, 7, 5, 7};
    cout << "Majority Element is : " << majorityElement(nums);
    return 0;
}