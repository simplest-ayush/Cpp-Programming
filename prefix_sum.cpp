// #include<iostream>
// using namespace std;
// int main(){
//     long int n;
//     cin>>n;
//     long long int arr[n],pre[n],sum,s=0;
//     for(long long int i=0;i<n;i++){
//         s=s+arr[i];
//         pre[i]=s;
//     }
//     long int q;
//     cin>>q;
//     long int r,l;
//     for(long long int i=0;i<=q;i++){
//         cin>>l>>r;
//         sum=pre[r-1]-pre[l-1]+arr[l-1];
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ar[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int j=i+1;
        ar[j]=arr[i]+ar[j-1];
    }
    int c;
    cin>>c;
    int sum=0;
    for(int i=0;i<c;i++){
        int l,r;
        cin>>l>>r;
        sum=ar[r-1]+ar[l-1]+arr[l-1];
    }
    cout<<sum;
    return 0;
}