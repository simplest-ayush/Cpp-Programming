#include<bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int> stalls, int dist, int cows){
    int cowCnt=1;
    int lastPlaced=stalls[0];
    for(int i=0; i<stalls.size(); i++){
        if(stalls[i]-lastPlaced>=dist){
            cowCnt++;
            lastPlaced=stalls[i];
        }
        if(cowCnt>=cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> stalls, int cows){
    int n=stalls.size();
    sort(stalls.begin(), stalls.end());
    int low=1;
    int high=stalls[n-1]-stalls[0];
    while(low<=high){
        int mid=low+(high-low)/2;
        if(canWePlace(stalls, mid, cows)==true){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}

int main(){
    vector<int> stalls={18, 27, 44, 77, 69, 19, 35, 83, 9, 64 };
    int cows=4;
    int maxOfMinDistance=aggressiveCows(stalls, cows);
    cout<<maxOfMinDistance;
    return 0;
}