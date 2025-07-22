#include <bits/stdc++.h>
using namespace std;

int cntSubsequences(int i, int s, int sum, vector<int> &arr, int n)
{
    if (i == n)
    {
        if (s == sum)
            return 1;
        else
            return 0;
    }
    s += arr[i];
    int left = cntSubsequences(i + 1, s, sum, arr, n);
    s -= arr[i];
    int right = cntSubsequences(i + 1, s, sum, arr, n);
    return left + right;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int n = arr.size();
    int sum = 2;
    cout << "The number of subsequences with sum " << sum << " are : " << cntSubsequences(0, 0, sum, arr, n);
    return 0;
}