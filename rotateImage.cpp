#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>> nums){
    // BRUTE FORCE APPROACH : USING EXTRA SPACE 
    // TIME COMPLEXITY : O(N²)
    // SPACE COMPLEXITY : O(N²)

    // int n=nums.size();
    // int m=nums[0].size();
    // int ans[n][m];
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         ans[j][n-1-i]=nums[i][j];
    //     }
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         nums[i][j]=ans[i][j];
    //     }
    // }
    // return nums;


    // OPTIMAL APPROACH : IN-PLACE 
    // TIME COMPLEXITY : O(N²)
    // SPACE COMPLEXITY : O(1)

    // first find the transpose of the matrix and then reverse every row of the matrix
    int n=nums.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(nums[i][j], nums[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        reverse(nums[i].begin(), nums[i].end());
    }
    return nums;
}

int main(){
    vector<vector<int>> nums={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> result=rotateMatrix(nums);
    int n=nums.size();
    int m=nums[0].size();
    cout<<"Matrix after rotating it by 90 degree in clockwise direction is : "<<'\n';
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}