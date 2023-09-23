#include<bits/stdc++.h>
using namespace std;

void fun(int i){
    cout<<i<<" ";
}

struct A{
    void operator()(int i){
        cout<<i+1<<" ";
    }
};

int main(){

    vector<int> v={1,2,3,4,5};

    // for_each(v.begin(),v.end(),fun);
    // cout<<endl;

    // struct A obj;
    // for_each(v.begin(),v.end(),obj);
    // cout<<endl;




    // //Syntax 1
    // vector<int>s1={1,2,3,4,5};
    // for(int x:s1){   //You can also write (auto x:s1)
    //     cout<<x+4<<" ";
    // }
    // cout<<endl;

    // //Syntax 2
    // int arr[5]={1,2,3,4,5};
    // for(int x:arr){  //You can also write (auto x:arr)
    //     cout<<x+3<<" ";
    // }
    // cout<<endl;

    // //Syntax 3
    // string str="Sumiteshwar Kumar";
    // for(char x:str){  //You can also write (auto x:str)
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    // //Syntax 4
    // for(int x:{1,2,3,4,5}){
    //     cout<<x+2<<" ";
    // }
    // cout<<endl;

    
    return 0;
}