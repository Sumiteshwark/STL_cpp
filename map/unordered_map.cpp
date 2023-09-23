//It stores unique element in no particular order.
//keys are not in particular order but organised in bucket depending on their hash value.
//finding keys takes constant time(i.e. O(1)).
//unordered_map is mainly used in finding single element using key.
//use iterator(only begin and end  not rbegin and rend bcz it allows only forward iterator).
//capacity function(empty, size, maxsize).
// Element access(operator[], at).
//Modifier functions (i.e. insert,erase,swap,clear).
//Element lookup functions(find, count)

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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //******************************************************************//
    unordered_map<char, int> m;
    m.insert(make_pair('a', 1));
    m.insert({'a', 2});  //This is just ignored and also value is not updated.
    m.insert({'b', 4});
    m.insert({'c', 13});
    m.insert({'d', 23});
    m.insert({'e', 33});

    display(m);

    display(m);
    return 0;
}