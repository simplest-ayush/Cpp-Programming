// #include<iostream>
// using namespace std;
//  int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i+j-1<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

//     return 0;

//  }


                                        //   OR
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int a=i;
        while(j<=i){
            cout<<a;
            a=a+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
    return 0;
}
