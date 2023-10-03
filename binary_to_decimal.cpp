//                                          DECIMAL BINARY TO
#include<iostream>
// #include<math.h>
// using namespace std;
// int main(){                
//   int n,ans=0,i=0;
//   cout<<"Enter any number : ";
//   cin>>n;
//   while(n!=0){
//     int bit = n&1;
//     ans=(bit*pow(10,i))+ans;
//     n=n>>1;
//     i++;
//   }
//   cout<<"The binary form of given no. is : "<<ans<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int a,ans=0;
//   cout<<"Enter any number : ";
//   cin>>a;
//   while(a!=0){
//     int rem=a%2;
//     ans=ans*10+rem;
//     a=a/2;
//   }
//   cout<<"The binary form of given no. is : "<<ans<<endl;
//   return 0;
// }

                                             //BINARY TO DECIMAL  

#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n,ans=0,i=0;
  cout<<"Enter the binary number : ";
  cin>>n;
  while(n!=0){
    int digit=n%10;
    if(digit==1)
      ans=pow(2,i)+ans;
    n=n/10;
    i++;
  }
  cout<<"Decimal form of given no. is : "<<ans<<endl;
  return 0;
}                                          