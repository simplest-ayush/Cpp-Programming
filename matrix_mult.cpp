#include<iostream>
using namespace std;
int main(){
    int m1[3][3],m2[3][3],m[3][3];
    cout<<"Enter elelments of matrix 1 : ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"Enter elelments of matrix 2 : ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>m2[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            m[i][j]=0;
            for (int k=0;k<3;k++){
                m[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    return 0;
}