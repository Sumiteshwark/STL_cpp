#include<bits/stdc++.h>
using namespace std;

int main(){
    //upper_bond and lower_bond both gives iterator. and elements should be in sorted order.
    vector<int>a={1,2,3,4,4,6,8};
    vector<int>:: iterator up=upper_bound(a.begin(),a.end(),4);
    vector<int>:: iterator down=lower_bound(a.begin(),a.end(),4);
    cout<<up-a.begin()<<" "<<down-a.begin()<<endl;
    //To find numbers of 4 in given array:-
    cout<<"Numbers of 4 = "<<(up-down)<<endl;
    return 0;
}