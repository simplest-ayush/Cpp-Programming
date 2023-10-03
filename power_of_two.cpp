// // #include<cmath>
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int a,flag=0;
// //     cout<<"Enter the value of a : ";
// //     cin>>a;
// //     for(int i=1;i<=30;i++){
// //         int ans =pow(2,i);
// //         if (ans==a){
// //             flag=1;
// //             break;
// //         }
// //     }
// //     if(flag)
// //     cout<<"Yes";
// //     else
// //     cout<<"No";
// //     return 0;
// // }


// //                                      OR
// #include<cmath>
// #include<iostream>
// using namespace std;
// int main(){
//     int a,flag=0,ans=1;
//     cout<<"Enter the value of a : ";
//     cin>>a;
//     for(int i=1;i<=30;i++){
//         if (ans==a){
//             flag=1;
//             break;
//         }
//         ans =ans*2;
//     }
//     if(flag)
//     cout<<"Yes";
//     else
//     cout<<"No";
//     return 0;
// }

//                                           OR

#include<iostream>
using namespace std;
int main(){
    int a,count=0;
    cout<<"Enter the value of a : ";
    cin>>a;
    while (a!=0){
        if (a&1){
            count++;
        }
        a=a>>1;
    }
    if (count==1)
    cout<<"This number represents power of two ";
    else
    cout<<"This number doesn't represents power of two ";
    return 0;
}



