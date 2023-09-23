//deque is used as both stack and queue.
//deque uses almost all proerty of vector (like iterator,size,capacity etc.).
//stack and queue don't allow iterator but in deque we use iterator.
//begin,end,rbegin,rend,  size,max_size,resize,empty,shrink_to_fit,  operator[],at,front,back,....
//assign,push_back,push_front,pop_back,pop_front,insert,erase,swap,clear

#include<bits/stdc++.h>
using namespace std;

void display(deque<int> q){
    // for(auto x:q){
    //     cout<<x<<" ";
    // }
    for(auto it=q.begin();it!=q.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void reversedisplay(deque<int> q){
    for(auto it=q.rbegin();it!=q.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    deque<int> q{1,2};
    // deque<int> s(5,0);  //makes deque of size five and all element is 0.
    q.push_front(10);
    q.push_front(20);
    q.push_back(30);
    q.push_back(40);
    display(q);

    // q.pop_front();
    // display(q);

    // reversedisplay(q);

    // cout<<q.size()<<endl;

    // cout<<q.front()<<" "<<q.back()<<endl;

    // q.resize(4); 

    // q.assign({9,8,7});   //remove all elements from q and replace that from this value.
    // deque<int> c;
    // c.assign(5,0);  //makes deque of size five and all element is 0.
    // display(c);

    // q.insert(q.begin(),9);
    // q.insert(q.end(),19);
    // display(q);
    // deque<int>a{11,12};
    // q.insert(q.begin()+1,a.begin(),a.end());
    // display(q);

    // q.erase(q.begin(),q.begin()+2);
    // cout<<q.empty()<<endl;

    // q.clear();
    // cout<<q.empty()<<endl;

    // deque<int>sw={1,9,11,99};
    // display(sw);
    // display(q);
    // sw.swap(q);
    // display(sw);
    // display(q);

    return 0;
}