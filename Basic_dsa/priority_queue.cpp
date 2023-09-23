//priority_queue implement using heap.
// for queue:  back->[2,3,4,7,6]<-front
// for default priority queue elements seems to be in accending order but that is in decending order
// because element is pop by front. ex: [2,3,4,5,6].
// In priority_queue, set and map we can't make compartor function directly as in sort in pair so we have to make class and then overload the operator.
// iterator don't work in priority queue. So so  [while(!q.empty()){ do something. }]


#include<bits/stdc++.h>
using namespace std;

template <class T>  //It is used to take any data type as down for both int and string otherwise we have to make two display function.
void display(T p){
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;
}

class compare{
    public:
    bool operator()(int a, int b){
        return (a%3>b%3);
    }
};

int main(){


    priority_queue<int> p;
    p.push(1);
    p.push(21);
    p.push(11);
    p.push(11);
    p.push(10);
    priority_queue<int> q;
    q.push(3);
    q.push(1);
    q.push(31);
    cout<<p.size()<<" "<<q.size()<<endl;
    display(p);
    display(q);
    q.swap(p);
    cout<<p.size()<<" "<<q.size()<<endl;
    display(p);
    display(q);



    // priority_queue<string> p1;
    // p1.push("ab");
    // p1.push("xy");
    // p1.push("bd");
    // p1.push("aa");
    // p1.push("AA");
    // display(p1);




    // priority_queue<int, vector<int>,greater<int>>s;
    // s.push(13);
    // s.push(1);
    // s.push(23);
    // s.push(33);
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;




    // priority_queue<int, vector<int>,compare>s;
    // s.push(13);
    // s.push(1);
    // s.push(23);
    // s.push(33);
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;

    return 0;
}