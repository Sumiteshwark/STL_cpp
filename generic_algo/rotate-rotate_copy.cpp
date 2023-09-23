#include<bits/stdc++.h>
using namespace std;

void display(vector <int> v){
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
cout<<endl;
}

int main(){

    //for rotate
    vector<int>v={1,2,3,4,5,6,7};
    rotate(v.begin(),v.begin()+2,v.end());
    display(v);




    //for rotate_copy
    // vector<int>v={1,2,3,4,5,6,7};
    // vector<int>x(v.size());
    // rotate_copy(v.begin(),v.begin()+2,v.end(),x.begin());
    // display(x);
    return 0;
}