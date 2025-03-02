#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> height)
{
    int n = height.size();
    int maxiArea = 0;
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int area = (right - left) * (min(height[left], height[right]));
        maxiArea = max(area, maxiArea);
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maxiArea;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum area of the container can be : " << maxArea(height) << " units";
    return 0;
}