#include <bits/stdc++.h>
using namespace std;

void findCombination(int index, int target, vector<int> &candidates, vector<int> &ds, vector<vector<int>> &ans)
{
    if (index == candidates.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if (candidates[index] <= target)
    {
        ds.push_back(candidates[index]);
        findCombination(index, target - candidates[index], candidates, ds, ans);
        ds.pop_back();
    }
    findCombination(index + 1, target, candidates, ds, ans);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<int> ds;
    vector<vector<int>> ans;
    findCombination(0, target, candidates, ds, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }
    return ans;
}

int main()
{
    vector<int> candidates = {2, 3, 5};
    int target = 8;
    combinationSum(candidates, target);
    return 0;
}