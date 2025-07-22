#include <bits/stdc++.h>
using namespace std;

void findCombination(int index, int target, vector<int> &candidates, vector<int> &ds, vector<vector<int>> &ans)
{
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i=index; i<candidates.size(); i++){
        if(i>index && candidates[i]==candidates[i-1]) continue;
        if(candidates[i]>target) break;
        ds.push_back(candidates[i]);
        findCombination(i+1, target-candidates[i], candidates, ds, ans);
        ds.pop_back();
    }
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
    vector<int> candidates = {1,1,1,2,2};
    int target = 4;
    combinationSum(candidates, target);
    return 0;
}