#include<iostream>
#include<algorithm>
using namespace std;
int transposeMatrix(int matrix[][3],int arr[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=matrix[j][i];
        }
    }
    cout<<"Transpose of the matrix is : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<arr[i][j];
        }
        cout<<"\n";
    }
}

void rotate(int arr[][3]){
    int stcol=0;
    int endCol=2;
    while(stcol<=endCol){
        swap(arr[stcol++],arr[endCol--]);
    }
    cout<<"Roteted matrix is : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<arr[i][j];
        }
        cout<<"\n";
    }
}
int main(){
    // int row,col;
    // cout<<"Enter no. of rows and columns : ";
    // cin>>row>>col;
    int matrix[3][3],arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
        }
    }
    transposeMatrix(matrix,arr);
    rotate(arr);
    return 0;
}