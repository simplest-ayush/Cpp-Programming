#include <bits/stdc++.h>
using namespace std;

void findUniqueSubsets(int index, vector<int> &arr, vector<int> &ds, set<vector<int>> &ans)
{
    if (index == arr.size())
    {
        ans.insert(ds);
        return;
    }
    ds.push_back(arr[index]);
    findUniqueSubsets(index + 1, arr, ds, ans);
    ds.pop_back();
    findUniqueSubsets(index + 1, arr, ds, ans);
}

vector<vector<int>> uniqueSubsets(vector<int> &arr)
{
    vector<int> ds;
    set<vector<int>> ans;
    sort(arr.begin(), arr.end());
    findUniqueSubsets(0, arr, ds, ans);
    vector<vector<int>> res(ans.begin(), ans.end());
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return res;
}

int main()
{
    vector<int> arr = {1, 2, 2};
    uniqueSubsets(arr);
    return 0;
}