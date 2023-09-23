//we connot us comparator directly as in pair instead of that we have to make class and then define comparator same as priority_queue.
//code is of using set arrange each pair in ascending order of second element. By default it arrange in ascending order of first element.

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

class comp{
    public:
    bool operator()(const pair<int,int> &a, const pair<int,int> &b){
        return (a.second<b.second);
    }
};

template<class T>
void display(T s){
    for(auto x:s){
        cout<<'('<<x.first<<" "<<x.second<<')'<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //******************************************************************//
    set<pair<int,int>,comp> s{{1,2},{0,3}};
    // s.insert({1,2});
    // s.insert({0,3});
    s.insert({8,0});
    s.insert({5,1});
    display(s);
    return 0;
}