#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

                                            //    OR----->In reverse direction
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch='B'+i+j-n;
//         while(j<=n){
//             cout<<ch<<" ";
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }