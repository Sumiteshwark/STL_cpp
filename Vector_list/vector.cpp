#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    return a>b;
}

void display(vector <int> v){
    // for(auto &x:v){
    //     cout<<x<<" ";
    // }

    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*it<<" ";
    // }

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
cout<<endl;
}

// void reversedisplay(vector<int> v){
//     // for(auto it=v.rbegin();it!=v.rend();it++){
//     //     cout<<*it<<" ";
//     // }

//     // for(auto it=v.end()-1;it!=v.begin()-1;it--){
//     //     cout<<*it<<" ";
//     // }

//     vector<int>::reverse_iterator it;
//     for(it=v.rbegin();it!=v.rend();it++){
//         cout<<*it<<" ";
//     }
// cout<<endl;
// }

int main(){

    vector<int> b={2,3,6,5,7,1};

    vector<int> a;
    a={2,3,7};


    // vector<int> x(5);  //makes vector of size five and all element is 0.

    // vector<int> d(5,0); //makes vector of size five and all element is 0.

    // vector<int> c;
    // c.assign(5,0); //makes vector of size five and all element is 0.


    cout<<(a<=b)<<endl;

    // cout<<b.at(2)<<" "<<b[2]<<endl;  //both is same but 'at' restricts out of range element.

    // cout<<b.front()<<" "<<b.back()<<endl;

    // cout<<b.size()<<" "<<b.capacity()<<endl;
    // cout<<b.empty()<<endl;
    // b.clear();  //clear all elements.
    // cout<<b.size()<<" "<<b.capacity()<<endl; //after clear size change but capacity doesnot.
    // cout<<b.empty()<<endl; //returns 0 or 1;

    // cout<<b.max_size()<<endl;

    // display(b);
    // sort(b.begin(),b.end());  //Sort vector in increasing order.
    // display(b);
    // sort(b.begin(),b.end(),comp);  //Sort vector in decreasing order.
    // display(b);

    // display(b);
    // reverse(b.begin(),b.end());
    // display(b);

    // cout<<b.size()<<endl;
    // b.resize(3); //if resize(x), x is greater then current size the zero is assign to all remeaning.
    // cout<<b.size()<<endl;

    // b.push_back(6);
    // b.pop_back();

    // b.insert(b.begin(),11);
    // vector<int>z={2,3,2};
    // b.insert(b.begin()+2,z.begin(),z.end());

    // vector<int> c{9,8,7,6};
    // b.swap(c); //change elements to each other.

    display(b);
    // reversedisplay(b);
    return 0;
}