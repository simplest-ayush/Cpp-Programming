#include<bits/stdc++.h>
using namespace std;

int maxScore(vector<int> &cardPoints, int k){
    int score=0;
    int leftSum=0;
    int rightSum=0;
    int rIndex=cardPoints.size()-1;
    for(int i=0; i<k; i++){
        leftSum+=cardPoints[i];
    }
    score=leftSum;
    for(int i=k-1; i>=0; i--){
        leftSum-=cardPoints[i];
        rightSum+=cardPoints[rIndex--];
        score=max(score, leftSum+rightSum);
    }
    return score;
}

int main(){
    vector<int> cardPoints={1,2,3,4,5,6,1};
    int k = 3;
    cout<<"The maximum score that you can get after selecting "<<k<<" cards is : "<<maxScore(cardPoints, k);
    return 0;
}