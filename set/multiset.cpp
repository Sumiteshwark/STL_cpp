//In multiset all property is same as set.
//Only differece is here duplicates are allowed;

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

////specially for set s1
// void display(set<int> s){
//     for(auto x:s){
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }

////specially for multiset s2
// void display(multiset<int> s){
//     for(auto x:s){
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }

////works for both set and multiset.
template<class T>
void display(T s){
    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //******************************************************************//

    set<int> s{1,2,3};
    s.insert(1);
    s.insert(2);
    display(s);

    set<int, greater<int>> s1{1,2,3};
    s1.insert(1);
    s1.insert(2);
    display(s1);

    multiset<int> s2{1,2,3};
    s2.insert(1);
    s2.insert(2);
    display(s2);

    multiset<int, greater<int>> s3{1,2,3};
    s3.insert(1);
    s3.insert(2);
    display(s3);
    return 0;
}