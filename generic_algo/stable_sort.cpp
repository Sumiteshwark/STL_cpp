#include<bits/stdc++.h>
using namespace std;

void display(vector <int> v){
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
cout<<endl;
}

int main(){
    vector<int>v={4,3,6,5,4,6,8,1};
    display(v);

    //stable_sort is same as sort but first of same element comes first.
    stable_sort(v.begin(),v.end());

    display(v);


    return 0;
}