//Member variables---first,second.
//Member function---(constructor):, pair::operator=, pair::swap, make_pair

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void display(vector<pair<int,int>> v){
    for(auto x:v){
        cout<<'('<<x.first<<" "<<x.second<<')'<<" ";
    }
    cout<<endl;
}

bool sortbysec(const pair<int,int>&a, const pair<int,int>&b){
    return (a.second<b.second);
}

int main(){
    
    //Initializing a pair
    // pair<int, char>g1;
    // pair<int, char>g2(1,'a');
    // pair<int, int>g3(1,10);
    // pair<int, int>g4(g3);
    // pair<int, char>g5=make_pair(1,'a');
    //pair<int,char>g6=g5;

    // g1.first=10;
    // g1.second='a';
    

    // cout<<g1.first<<" "<<g1.second<<endl;
    // cout<<g2.first<<" "<<g2.second<<endl;
    // cout<<g3.first<<" "<<g3.second<<endl;
    // cout<<g4.first<<" "<<g4.second<<endl;
    // cout<<g5.first<<" "<<g5.second<<endl;
    // cout<<g6.first<<" "<<g6.second<<endl;

    
    // g1.swap(g2);
    // cout<<g1.first<<" "<<g1.second<<endl;
    // cout<<g2.first<<" "<<g2.second<<endl;



    vector<pair<int,int>> v;
    v.push_back(make_pair(1,3));
    v.push_back({7,2}); //same as make_pair(7,2)
    v.push_back({1,1});
    v.push_back(make_pair(6,8));
    v.push_back(make_pair(9,7));
    display(v);
    // sort(v.begin(),v.end());  //sort in acending order comparing the first element of each pair.
    // sort(v.begin(),v.end(),sortbysec);  //bcz of comparator(i.e. sortbysec) it sort by second element of each pair.
    display(v);


    return 0;
}