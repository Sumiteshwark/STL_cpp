#include<bits/stdc++.h>
using namespace std;

void display(vector <int> v){
    // for(auto &x:v){
    //     cout<<x<<" ";
    // }

    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*it<<" ";
    // }

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
cout<<endl;
}

void reversedisplay(vector<int> v){
    // for(auto it=v.rbegin();it!=v.rend();it++){
    //     cout<<*it<<" ";
    // }

    // for(auto it=v.end()-1;it!=v.begin()-1;it--){
    //     cout<<*it<<" ";
    // }

    vector<int>::reverse_iterator it;
    for(it=v.rbegin();it!=v.rend();it++){
        cout<<*it<<" ";
    }
cout<<endl;
}

int main(){
    vector<int>v={4,3,2,5,6};
    display(v);
    reversedisplay(v);
    return 0;
}