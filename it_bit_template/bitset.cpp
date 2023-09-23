#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //******************************************************************//
    
    bitset<10> b(13);
    for(int i=9;i>=0;i--){
        cout<<b[i];
    }
    cout<<endl;

    for(int i=9;i>=0;i--){  //same work as above loop.
        cout<<b.test(i);
    }
    cout<<endl;

    // b[0]=0;   

    // b.set(1,1);  //is equal to b[1]=1
    // b.set(4);  //is equal to b[4]=1
    // b.set();   //set all bit to '1'

    // b.reset(2);   //is equal to b[2]=0
    // b.reset();  //set all bit to ('0');

    // b.flip();   //reverse all bit i.e. one's compliment.

    // cout<<b.count()<<endl;  //count total number of one.
    // cout<<b.size()<<endl;   //print total size(i.e. 10)
    // cout<<b.any()<<endl;    //print '1' if any bit is '1'.
    // cout<<b.none()<<endl;   //print '1' if all bit is '0'.
    // cout<<b.all()<<endl;   //print '1' if all bit is '1'.
    return 0;
}