#include<iostream>
using namespace std;
int main(){

    int marks[5]={90,91,89,98,95};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"The value of "<<i<<" is "<<marks[i]<<endl;
    // }




    // int i=0;
    // while (i<5)
    // {
    //     cout<<"The value of marks "<<i<<" is " ;
    //     cout<<marks[i]<<endl;
    //     i++;
    // }



    // int i=0;
    // do
    // {
    //     cout<<"The value of mark "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // } while (i<5);



    // Arrays and pointers(Very important)
    int*p=marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
   




    
    return 0;
}