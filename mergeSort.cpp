#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int low, int mid, int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(nums[left]<nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        nums[i]=temp[i-low];
    }
}

void mergeSort(vector<int> &nums, int low, int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid+1, high);
    merge(nums, low, mid, high);
}

int main(){
    vector<int> nums={6, 5, 4, 3, 2, 1};
    cout<<"Array before sorting is : "<<'\n';
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<'\n';
    mergeSort(nums, 0, nums.size()-1);
    cout<<"Array after sorting is : "<<'\n';
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}