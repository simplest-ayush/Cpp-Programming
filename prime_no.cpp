// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     long long int sieve[n+1];
//     for(int i=0;i<=n;i++){
//         sieve[i]=1;
//         sieve[0]=sieve[1]=0;
//         long int t,r;
//         int count=0;
//         for(int i=2;i<sqrt(n);i++){
//             if(sieve[i]==1){
//                 for(int j=2*i;j<=n;j+=i)
//                 sieve[j]=0;
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main() {
//   long long int n;   
//   cin>>n;
//   long long int sieve[n+1];
//   for(int i=0;i<=n;i++)
//       sieve[i]=1;
//   sieve[0]=sieve[1]=0;
//   long long int t;
//   long long int r;
//   for(int i=2;i<=sqrt(n);i++) {
//     	if(sieve[i]==1) {
//       	for(int j=2*i;j<=n;j+=i) 
//            	sieve[j]=0;
//     	} 
//    } 
//   return 0;  
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=1;
    for (int i=2;i<n/2;i++){
        if (n%i==0){
            isprime=0;
            break;
        }        
    }
    if (isprime==0){
        cout<<"Not a prime no "<<endl;
    }
    else{
        cout<<"Given no. is a prime number "<<endl;
    }
    return 0;
}