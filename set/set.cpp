//set and multiset is implement using binary search tree.   //priority_queue implement using heap.
//set is inserted in ascending order.    //priority_queue is in decending order.
//set stores unique element.
//keys are immutable.so,we can't modify it once assign.They can only be inserted or removed.(in set,multiset,unordered_set)
// In priority_queue, set and map we can't make compartor function directly as in sort in pair so we have to make class and then overload the operator.
//we can't find element using index (like arr[3] or arr.at(3)) so we have to find directly by value or by using iterator.
//set uses iterator(i.e. begin,end,rbegin,rend).
//capacity functions (i.e. empty,size,max_size).
//Modifier functions (i.e. insert,erase,swap,clear).
//operations (i.e. distance,find,count,lower_bound,upper_bound)


#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

// void display(const set<int> &s){
//     for(auto x:s){
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }

// void display(const set<int, greater<int>> &s){
//     for(auto x:s){
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }


// this display is used as both above display function.
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
    set<int> s1{11,2,5,4};    //insert in ascending order.
    // set<int, greater<int>> s{11,2,5,4};   //insert in decending order bcz of comparator(i.e. greater<int>)
    s1.insert(2);  //doesn't use bcz '2' is already in s;
    s1.insert({3,7});
    s1.insert(13);
    display(s1);

    // set<int>s=s1;
    // display(s);

    // cout<<s1.count(3)<<endl;   //it is mainly used in multiset. in set it only tells either number is present or not(i.e. 0 or 1).

    // cout<<s1.empty()<<" "<<s1.size()<<" "<<s1.max_size()<<endl;
    // s1.clear();  //clear all elements of s1;
    // cout<<s1.empty()<<" "<<s1.size()<<" "<<s1.max_size()<<endl;

    // s1.erase(11);  //delete 11 from set.
    // s1.erase(s1.begin());  //delete first element.
    // display(s1);
    // s1.erase(s1.begin(),s1.end());  //delete all elements.
    // cout<<s1.empty()<<" "<<s1.size()<<" "<<s1.max_size()<<endl;


    // int index = distance(s1.begin(),s1.find(5));  //It gives index of element.

    // auto it=s1.find(5);  //it returns iterator.
    // // s1.erase(s1.begin(),it);  //all elemnts before 5 is deleted.
    // // display(s1);
    // s1.erase(it,s1.end());   //all elements after 5 along with it is deleted.
    // display(s1);

    // set<int>s2{9,8,7,6};
    // display(s2);
    // s1.swap(s2);
    // display(s1);
    // display(s2);

    return 0;
}