#include<bits/stdc++.h>
using namespace std;

void display(queue<int> s){
    while(!s.empty()){
        cout<<s.front()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    display(s);
    queue<int> q;
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

    cout<<q.front()<<" "<<q.back()<<endl;

    queue<int> z=s;
    display(z);

    return 0;
}