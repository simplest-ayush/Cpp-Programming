#include<iostream>
using namespace std;

long long int sqrt(int n){
    long long int s = 0;
    long long int e = n;
    long long int ans = -1;
    long long int mid = s + (e-s)/2;
    while(s<=e){
        long long int square = mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
double point(int n,int precision,int ans){
    double factor = 1;
    double exact_ans = ans;
    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j = ans; j*j<n ; j = j+factor ){
            exact_ans = j;
        }
    }
    return exact_ans;
}
int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int ans = sqrt(n);
    cout<<"The exact sqrt of given no. is : "<<point(n,4,ans)<<endl;
}