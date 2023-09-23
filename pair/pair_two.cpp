#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define mp make_pair
#define pb push_back

template<class pair>
void display(const vector<pair> &vf){
    for(auto x:vf){
        cout<<'('<<x.F<<" "<<x.S<<')'<<" ";
    }
    cout<<endl;
    cout<<"Printed vector of size "<<vf.size()<<endl;
}


void print(const vector<pair<int, pi>> &v){
    for(auto x:v){
        cout<<'('<<x.F<<" "<<x.S.F<<" "<<x.S.S<<')'<<" ";
    }
    cout<<endl;
}

bool sortbyfirstofsecond(const pair<int, pi> &a, const pair<int, pi> &b){
    return (a.S.F<b.S.F);
}

bool sortbysecondofsecond(const pair<int, pi> &a, const pair<int, pi> &b){
    return (a.S.S<b.S.S);
}

bool sortit(const pi &a, const pi &b){
    if(a.S!=b.S){
        return a.S<b.S;
    }
    else{
        return a.F>b.F;
    }
}

int main(){
    // pi a;
    // a=mp(1,3);
    // cout<<a.F<<" "<<a.S<<endl;


    // vector<pi>v;
    // v.pb(mp(41,51));
    // v.pb({21,31});
    // display(v);


    // vector<pair<int, pi>> v;
    // v.pb({1,{12,13}});
    // v.pb(mp(4,mp(5,6)));
    // v.pb({2,{8,9}});
    // print(v);
    // // sort(v.begin(),v.end());
    // // sort(v.begin(),v.end(),sortbyfirstofsecond);
    // // sort(v.begin(),v.end(),sortbysecondofsecond);
    // print(v);


    vector<pi>vec;
    vec.pb({2,1});
    vec.pb({3,1});
    vec.pb({1,2});
    vec.pb({5,2});
    vec.pb({7,0});
    display(vec);
    sort(vec.begin(),vec.end(),sortit); //sort by second and if that equal then sort by first in decending.
    display(vec);

    
    return 0;
}