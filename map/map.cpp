// using map we can assign index anything(like string i.e. arr["Rahul"])
// It is same as dictaniory in python.
// using map, keys are in sorted order and keys are unique.
// finding element can take log(n) time.
// In priority_queue, set and map we can't make compartor function directly as in sort in pair so we have to make class and then overload the operator.
// Here we can find element by using operator[] or using at(ie arr["Rahul"] or arr.at("Rahul")).
// unordered_map takes constant (i.e. O(1)) time to find an element.
// It is also implemented using binary search tree.
//uses iterator(i.e. begin,end,rbegin,rend).
//capacity functions (i.e. empty,size,max_size).
//Modifier functions (i.e. insert,erase,swap,clear).
//Element access (i.e. operator[], at).
//operations (i.e. find,count,lower_bound,upper_bound)
//if we add element in map by using insert the we should do it by using pair.

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

// void display(map<char, int>m){
//     for(auto x: m){
//         cout<<'('<<x.first<<" "<<x.second<<')'<<" ";
//     }
//     cout<<endl;
// }

// void display(map<char, int, comp>mp){   //This will not work from above display function so we have to make template.
//     for(auto x: mp){
//         cout<<'('<<x.first<<" "<<x.second<<')'<<" ";
//     }
//     cout<<endl;
// }

template<class T>
void display(T mp){ 
    for(auto x: mp){
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
    map<char, int> m;

    m['a']=2;
    m['a']=3; //This will only update key 'a' to value 3.
    m['b']=4;
    m['e']=4;
    m.insert(make_pair('c', 5));
    m.insert(make_pair('c', 15)); //This will not update value of c it only helps to insert element if same key is not present.
    m.insert({'d', 6});

    // cout<<m.size()<<endl;

    // m.erase('a');
    // display(m);
    // auto it=m.begin();  //we can't write m.begin()+2 otherwise this will give error.
    // it++; it++;
    // m.erase(it,m.end());
    // display(m);

    // //find() returns an iterator.
    // if(m.find('b')==m.end()){
    //     cout<<"Elements not found."<<endl;
    // }
    // else{
    //     cout<<"Value = "<<m['b']<<endl;
    // }

    display(m);

    map<char, int, comp> mp;
    mp.insert(m.begin(), m.end());
    display(mp);

    return 0;
}