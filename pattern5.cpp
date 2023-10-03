// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         while(j<=i){
//             cout<<" "<<i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}