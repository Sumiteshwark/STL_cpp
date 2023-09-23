#include<bits/stdc++.h>
using namespace std;

bool fun(int i){
    return (i%2==0);
}

int main(){
    vector<int>a={1,2,4,1,5,1,6,10};

    //count simply gives total number of same element in an array.
    int d=count(a.begin(),a.end(),1);
    cout<<d<<endl;

    //count_if depends on condition and it gives total numner of elements on that condition.
    int c=count_if(a.begin(),a.end(),fun);
    cout<<c<<endl;
    return 0;
}