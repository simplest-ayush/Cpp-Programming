#include<bits/stdc++.h>
using namespace std;

vector<pair<char, int>> runLengthEncoding(string& s){
    vector<pair<char, int>> result;
    int i=0; 
    while (i<s.size()){
        int cnt=1;
        while(i+1<s.size() && s[i]==s[i+1]){
            cnt++;
            i++;
        }
        result.push_back({s[i], cnt});
        i++;
    }
    return result;
}

string createNewString(const vector<pair<char, int>>& pairs){
    string final="";
    for(const auto pair: pairs){
        final+=to_string(pair.second)+pair.first;
    }
    return final;
}

string countAndSay(int n){
    string result="1";
    for(int i=1; i<n; i++){
        vector<pair<char, int>> pairs=runLengthEncoding(result);
        result=createNewString(pairs);
    }
    return result;
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    string result = countAndSay(n);
    cout << "The " << n << "th term in the count-and-say sequence is: " << result << endl;
    return 0;
}