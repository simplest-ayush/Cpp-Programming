#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    int n = strs.size();
    string ans = "";

    sort(strs.begin(), strs.end());

    string first = strs[0];
    string second = strs[n - 1];

    for (int i = 0; i < min(first.size(), second.size()); i++)
    {
        if (first[i] != second[i])
        {
            break;
        }
        ans += first[i];
    }
    return ans;
}

int main()
{
    vector<string> strs;
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        strs.push_back(temp);
    }

    string ans = longestCommonPrefix(strs);
    cout << "The common prefix of the words of the array is : " << ans;
}