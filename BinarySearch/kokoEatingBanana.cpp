#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> piles){
    int maxi=INT_MAX;
    for(int i=0; i<piles.size(); i++){
        maxi=max(maxi, piles[i]);
    }
    return maxi;
}

long long calculateTotalHours(vector<int> piles, int hourly){
    long long totalHours=0;
    for(int i=0; i<piles.size(); i++){
        totalHours+=ceil(double(piles[i])/(double)hourly);
    }
    return totalHours;
}

int minEatingSpeed(vector<int> piles, int h){
    int low=1;
    int high=findMax(piles);
    while(low<=high){
        int mid=(low+high)/2;
        long long totalHours=calculateTotalHours(piles, mid);
        if(totalHours<=h){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}

int main(){
    vector<int> piles = {7, 15, 6, 3};
    int h = 8;
    int ans = minEatingSpeed(piles, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;
}