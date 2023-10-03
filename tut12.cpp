#include<iostream>
using namespace std;
union money
{
    int rice;
    char clothes;
    float pounds;

};

int main(){
    // enum meal{breakfast,lunch,dinner};
    // meal m1=breakfast;
    // meal m2=lunch;
    // meal m3=dinner;
    // cout<<m1<<endl;
    // cout<<m2<<endl;
    // cout<<m3<<endl;

    union money m1;
    // m1.rice=34;
    m1.clothes='A';
    // m1.pounds=261.45;
    cout<<m1.clothes<<endl;
    return 0;
}