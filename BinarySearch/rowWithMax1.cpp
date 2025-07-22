#include <bits/stdc++.h>
using namespace std;

int firstoccu(vector<int> arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = n;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>> &nums, int n, int m)
{
    int index = -1;
    int maxCnt = 0;
    for (int i = 0; i < n; i++)
    {
        int cntOnes = m - firstoccu(nums[i], m, 1);
        if (cntOnes > maxCnt)
        {
            maxCnt = cntOnes;
            index = i;
        }
    }
    return index;
}

int main()
{
    vector<vector<int>> nums= {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    cout<<"The row with maxixum ones is : "<<rowWithMax1s(nums, 3, 3);
    return 0;
}