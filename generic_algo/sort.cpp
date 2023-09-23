#include<bits/stdc++.h>
using namespace std;

void display(vector <int> v){
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
cout<<endl;
}

bool fun1(int i, int j){
    return (i<j);
}

bool fun2(int i, int j){
    return (i>j);
}

int main(){
    vector<int>v={4,3,6,5,8,1};
    display(v);

    sort(v.begin(),v.end());

    // sort(v.begin(),v.end(),fun1); //here fun is comparator which gives a logic.

    // sort(v.begin(),v.end(),fun2);

    display(v);


    return 0;
}