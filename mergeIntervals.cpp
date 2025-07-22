#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &nums){
    int n=nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        if(ans.empty() || nums[i][0]>ans.back()[1]){
            ans.push_back(nums[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1], nums[i][1]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> nums={{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> ans=mergeIntervals(nums);
    cout<<"After merging all the intervals new intervals are : "<<'\n';
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}