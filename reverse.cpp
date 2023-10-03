#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v){
    int s=0;
    int end=v.size()-1;
    while(s<=end){
        swap(v[s],v[end]);
        s++;
        end--;
    }
    return v;
}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v; 

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector <int> ans = reverse(v);
    print(ans);
    return 0;
}