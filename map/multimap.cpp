// Main difference by map is multimap don't allow operator[] and at. so, we have to use insert and erase.
// In multimap multiple elements can have equivalent keys.
// equal_range is used to find all values which have same keys. It returns two iterator(i.e. pair) where first element denotes the location of first key value pair and sevond element denotes the location of one after the location of last key value pair.

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

template<class T>
void display(T m){
    for(auto x:m){
        cout<<'('<<x.first<<" "<<x.second<<')'<<" ";
    }
    cout<<endl;
}

class comp{
    public:
    bool operator()(char a, char b){
        return a>b;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //******************************************************************//
    multimap<char, int> m;
    m.insert(make_pair('a', 1));
    m.insert({'a', 12});
    m.insert({'b', 4});
    m.insert({'a', 3});
    m.insert({'c', 13});

    display(m);
    // m.erase('a');  //It will delete all elements containing key 'a'.

    auto length = m.equal_range('a');
    for(auto it=length.first; it!=length.second;it++){
        cout<<it->second<<" ";
        // cout<<(*it).second<<" "; //works same as above line.
    }
    cout<<endl;

    // multimap<char, int, comp> mp;
    // mp.insert(m.begin(), m.end());
    // display(mp);

    return 0;
}