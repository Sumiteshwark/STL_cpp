#include<bits/stdc++.h>
using namespace std;

void display(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    display(s);
    stack<int> q;
    q.push(9);
    q.push(8);
    q.push(7);
    q.push(6);
    display(q);
    cout<<s.size()<<" "<<q.size()<<endl;


    // s.swap(q);
    // display(s);
    // display(q);
    // cout<<s.size()<<" "<<q.size()<<endl;


    // stack<int> z=s;
    // display(z);

    return 0;
}