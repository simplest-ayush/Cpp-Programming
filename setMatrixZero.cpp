#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setMatrixZero(vector<vector<int>> nums)
{
    int n = nums.size();
    int m = nums[0].size();
    int row[n] = {0};
    int col[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (nums[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                nums[i][j] = 0;
            }
        }
    }
    return nums;
}

int main()
{
    vector<vector<int>> nums = { {1, 1, 1},
                                 {1, 0, 1},
                                 {1, 1, 1} }; 

     cout<<"Matrix after setting zeros is : "<<'\n';
     vector<vector<int>> ans=setMatrixZero(nums);
     for(int i=0;i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
     }                            
    return 0;
}