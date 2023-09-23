// Two Ways:-
// (1)Unary Operation.
// (2)Binary Operation.


#include<bits/stdc++.h>
using namespace std;

void display(vector <int> v){
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
cout<<endl;
}

int fun(int i){
    return ++i;
}

int fun1(int i, int j){
    return (i+j);
}

int main(){

    // //for unary transform;
    // vector<int> a,b;
    // for(int i=1;i<6;i++){
    //     a.push_back(i);
    // }
    // b.resize(a.size());
    // display(a);
    // display(b);
    // transform(a.begin(),a.end(),b.begin(),fun);
    // display(a);
    // display(b);




    //for binary transform;
    vector<int> a,b;
    for(int i=1;i<6;i++){
        a.push_back(i);
    }
    for(int i=2;i<7;i++){
        b.push_back(i);
    }
    display(a);
    display(b);
    transform(a.begin(),a.end(),b.begin(),a.begin(),fun1);
    display(a);
    display(b);
    return 0;
}