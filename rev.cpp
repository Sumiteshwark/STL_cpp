#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define pob pop_back
#define endl '\n'
const int mod = 1e9+7;
using namespace std;

template <class T>
void display(T a){
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
}

int32_t main(){
    list<int>a={3,2,4,5,1};
    auto it=a.begin();
    it++;
    it++;
    a.insert(it,10);
    display(a);
    return 0;
}