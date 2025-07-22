#include <bits/stdc++.h>
#include <vector>
using namespace std;

int findMaxElemRow(vector<vector<int>> &mat, int n, int m, int col)
{
    int maxi = -1;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (mat[i][col] > maxi)
        {
            maxi = mat[i][col];
            index = i;
        }
    }
    return index;
}

vector<int> findPeak(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    int low = 0;
    int high = m - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int row = findMaxElemRow(mat, n, m, mid);
        int left = mid - 1 >= 0 ? mat[row][mid - 1] : -1;
        int right = mid + 1 < m ? mat[row][mid + 1] : -1;
        if (mat[row][mid] > left && mat[row][mid] > right)
        {
            return {row, mid};
        }
        else if (mat[row][mid] < left)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> mat = {{10, 20, 15}, {21, 30, 14}, {7, 16, 32}};
    vector<int> result = findPeak(mat);
    cout << "The coordinates of the peak element in the matrix are: (" << result[0] << ", " << result[1] << ")" << endl;
    return 0;
}