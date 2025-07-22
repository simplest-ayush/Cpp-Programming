#include<bits/stdc++.h>
using namespace std;

int totalPages(vector<int>& nums){
    int sum=0; 
    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
    }
    return sum;
}

int findMax(vector<int>& nums){
    int maxi=INT_MIN;
    for(int i=0; i<nums.size(); i++){
        maxi=max(maxi, nums[i]);
    }
    return maxi;
}

int countStudents(vector<int>& nums, int pages){
    int studs=1;
    int pagesStuds=0;
    for(int i=0; i<nums.size(); i++){
        if(pagesStuds+nums[i]<=pages){
            pagesStuds+=nums[i];
        }
        else{
            studs++;
            pagesStuds=nums[i];
        }
    }
    return studs;
}

int findPages(vector<int>& nums, int students){
    if(students>nums.size()){
        return -1;
    }
    int low=findMax(nums); 
    int high=totalPages(nums);
    while(low<=high){
        int mid=low+(high-low)/2;
        int nofStuds=countStudents(nums, mid);
        if(nofStuds>students){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}

int main(){
    vector<int> nums={25, 46, 28, 49, 24};
    int students=4;
    cout<<"The maximum number of pages assigned to a student is minimum when pages are : "<<findPages(nums, students);
    return 0;
}