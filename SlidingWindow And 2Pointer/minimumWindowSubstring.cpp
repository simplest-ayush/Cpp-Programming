#include <bits/stdc++.h>
using namespace std;

string minSubstr(string &s, string &t)
{
    int n = s.size();
    int m = t.size();
    int left = 0;
    int right = 0;
    int minLen = INT_MAX;
    int cnt = 0;
    int sIndex = -1;
    map<char, int> mpp;
    for (int i = 0; i < m; i++)
        mpp[t[i]]++;
    while (right < n)
    {
        if (mpp[s[right]] > 0)
        {
            cnt++;
        }
        mpp[s[right]]--;
        while (cnt == m)
        {
            if (right - left + 1 < minLen)
            {
                minLen = min(minLen, right - left + 1);
                sIndex = left;
            }
            mpp[s[left]]++;
            if (mpp[s[left]] > 0)
            {
                cnt--;
            }
            left++;
        }
        right++;
    }
    return sIndex == -1 ? "" : s.substr(sIndex, minLen);
}

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << "The minimum window substring that includes 'A', 'B', and 'C' from string t is : " << minSubstr(s, t);
    return 0;
}