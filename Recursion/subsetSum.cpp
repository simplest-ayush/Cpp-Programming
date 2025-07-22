#include <bits/stdc++.h>
using namespace std;

void findSubsetSums(int index, int sum, vector<int> &arr, vector<int> &ans)
{
    if (index == arr.size())
    {
        ans.push_back(sum);
        return;
    }
    findSubsetSums(index + 1, sum + arr[index], arr, ans);
    findSubsetSums(index + 1, sum, arr, ans);
}

vector<int> subsetSums(vector<int> &arr)
{
    vector<int> ans;
    findSubsetSums(0, 0, arr, ans);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 3};
    subsetSums(arr);
    return 0;
}