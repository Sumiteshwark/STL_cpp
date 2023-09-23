//It stores unique element in no particular order.
//keys are not in particular order but organised in bucket depending on their hash value.
//finding keys takes constant time(i.e. O(1)).
//unordered_set is mainly used in finding single element using key.
//use iterator(only begin and end  not rbegin and rend bcz it allows only forward iterator).
//capacity function(empty, size, maxsize).
//Element lookup functions(find, count, equal_range)

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void display(const unordered_set<int> &s){
    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    //******************************************************************//
    unordered_set<int> s{4,2,5,8,4,2,6};
    cout<<s.size()<<endl;
    display(s);
    auto it1=s.begin();
    it1++;
    auto it2=s.end();
    s.erase(it1,it2);
    display(s);

    return 0;
}