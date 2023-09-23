#include<bits/stdc++.h>
using namespace std;

void display(vector <int> v){
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
cout<<endl;
}

bool fun(int i, int j){
    return (i>j);
}

int main(){
    //for binary_search elements should be in sorted order and it returns boolean value.
    vector<int>v={1,2,3,5,7,11};

    display(v);
    // cout<<binary_search(v.begin(),v.end(),11)<<endl;

    // sort(v.begin(),v.end(),fun);
    // display(v);
    // cout<<binary_search(v.begin(),v.end(),11,fun)<<endl; //element in reverse sorted array.

    return 0;
}