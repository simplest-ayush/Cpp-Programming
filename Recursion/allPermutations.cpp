#include<bits/stdc++.h>
using namespace std;

void findPermutations(vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans, int freq[]){
    if(arr.size()==ds.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0; i<arr.size(); i++){
        if(!freq[i]){
            ds.push_back(arr[i]);
            freq[i]=1;
            findPermutations(arr, ds, ans, freq);
            ds.pop_back();
            freq[i]=0;
        }
    }
}

vector<vector<int>> permute(vector<int> &arr){
    vector<int> ds;
    vector<vector<int>> ans;
    int freq[arr.size()];
    for(int i=0; i<arr.size(); i++){
        freq[i]=0;
    }
    findPermutations(arr, ds, ans, freq);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return ans;
}

int main(){
    vector<int> arr={1, 2, 3, 4};
    permute(arr);
    return 0;
}