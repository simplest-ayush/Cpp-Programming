#include<bits/stdc++.h>
#include<vector>
using namespace std;

int rangeSum(vector<int> &nums, int n, int left, int right)
{
    vector<int> subSum;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            subSum.push_back(sum);
        }
    }
    sort(subSum.begin(), subSum.end());
    int rsum = 0;
    for (int i = left-1; i <= right-1; i++)
    {
        rsum += subSum[i];
    }
    for(int i=0;i<subSum.size();i++){
        cout<<subSum[i]<<endl;
    }
    return rsum % 1000000007;
}

int main(){
    vector<int> nums={1,2,3,4};
    int n=nums.size();
    int left=1,right=5;
    cout<<rangeSum(nums,n,left,right)<<endl;
}