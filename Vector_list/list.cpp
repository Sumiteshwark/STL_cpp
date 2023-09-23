// Its property is like linked list. The difference between vector and list is vector can 
// only insert or delete at the end but in list insertion and deleation can be done at front 
// or end both by push_front and pop_front.
// we cannot access list element directly like a[3].
// In list it is easy to insert or delete element at any position.
// It supports bidirectional iterator.



#include<bits/stdc++.h>
using namespace std;

void display(list <int> v){
    list<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
}

int main(){
    list<int>a;
    a={3,6,5,7,32,2};

    // list<int>b;
    // b.assign(3,0); //size is 3 and all 0.

    // list<int>a(3); //size is 3 and all 0.

    // list<int>a(3,0); //size is 3 and all 0.

    // list<int>b(a.begin(),a.end());

    // list<int>b={3,4,5,3};
    // cout<<(a==b)<<endl;
    // cout<<(a>=b)<<endl;

    // cout<<a.front()<<" "<<a.back()<<endl; //front and back gives value while begin and end gives iterator.

    // cout<<a.empty()<<endl; //print 0 or 1.
    // cout<<a.size()<<endl;
    // a.clear();
    // cout<<a.empty()<<endl;
    // cout<<a.size()<<endl;

    // display(a);
    // a.erase(a.begin());
    // display(a);
    // a.erase(a.begin(),a.end()); //It works same as a.clear().

    // display(a);
    // a.push_back(99);
    // display(a);
    // a.pop_back();

    // display(a);
    // a.push_front(111);
    // display(a);
    // a.pop_front();

    // display(a);
    // a.insert(a.begin(),11);  //we can't write a.begin()+2 otherwise this will give error. Instead write it++;it++.
    // auto it=a.begin();
    // it++;
    // it++;
    // a.insert(it,11); 
    // display(a);
    // list<int>z={2,3,2};
    // a.insert(a.begin(),z.begin(),z.end());
    // display(a);
    // a.insert(a.begin(),4,3); //It inserts 4 copies of 3 at the beginning.

    // display(a);
    // cout<<a.size()<<endl;
    // a.resize(4);
    // cout<<a.size()<<endl;

    // list<int>b={5,6,7,8};
    // display(a);
    // display(b);
    // a.swap(b);  //Both are swapped to each other.
    // display(a);
    // display(b);

    // display(a);
    // a.sort(); //sorts in ascending order.
    // display(a);
    // a.reverse();

    display(a);
    return 0;
}