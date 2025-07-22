#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> nums)
{
    int row = nums.size();
    int col = nums[0].size();
    int left = 0;
    int top = 0;
    int right = col - 1;
    int bottom = row - 1;
    vector<int> ans;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(nums[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(nums[i][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(nums[bottom][i]);
            }
        }
        bottom--;
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(nums[i][left]);
            }
        }
        left++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> result = spiralMatrix(nums);
    cout << "Matrix in spiral form is : " << '\n';
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}