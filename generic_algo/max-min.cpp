//max_element() returns iterator.

#include <bits\stdc++.h>

using namespace std;

bool myfn(int i,int j){
        return (i<j);
}
struct myclass{
        bool operator()(int i,int j){
                return (i<j);
        }
}myobj;

int main() {
        // int a=1,b=2;
        // cout<<max(a,b)<<" "<<min(a,b)<<endl;
        // char a1='A',b1='B';
        // cout<<max(a1,b1)<<" "<<min(a1,b1)<<endl;
        // string a2="jay",b2="ajay";
        // cout<<max(a2,b2)<<" "<<min(a2,b2)<<endl;


        int intarr[]={3,7,2,5,6,4,9};
        cout<<*max_element(intarr, intarr+7)<<" "<<*min_element(intarr, intarr+7)<<endl;
        cout<<*max_element(intarr, intarr+7, myfn)<<" "<<*min_element(intarr, intarr+7, myfn)<<endl;
        cout<<*max_element(intarr, intarr+7, myobj)<<" "<<*min_element(intarr, intarr+7, myobj)<<endl;
        
        return 0;
}