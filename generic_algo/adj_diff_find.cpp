// adjecent_difference retruns iterator to one more of the last element.
// adjecent_difference takes current as first element and one previous as second element.
// adjecent_ find first occurence of two consecutive elements and returns iterator to the first of these two elements and last if no such pair is found.

#include<bits/stdc++.h>
using namespace std;

int myop1(int x, int y){
        return x%y;
}
int myop2(int x, int y){
        return y%x;
}

bool myfunction(int i, int j){
        return (i==j+3);
}

int main(){
        int arr[]={1,2,3,5,9,11,12};
        int out[7];


        // adjacent_difference(arr, arr+7, out);
        // for(int x:out){
        //         cout<<x<<" ";
        // }
        // cout<<endl;
        // adjacent_difference(arr, arr+7, out, multiplies<int>());
        // for(int x:out){
        //         cout<<x<<" ";
        // }
        // cout<<endl;


        // adjacent_difference(arr, arr+7, out, myop1);
        // for(int x:out){
        //         cout<<x<<" ";
        // }
        // cout<<endl;

        // adjacent_difference(arr, arr+7, out, myop2);
        // for(int x:out){
        //         cout<<x<<" ";
        // }
        // cout<<endl;


        int arr1[]={5,20,5,30,30,20,13,10,10};
        vector<int> v(arr1, arr1+9);
        // auto it=adjacent_find(v.begin(), v.end());
        auto it=adjacent_find(v.begin(), v.end(), myfunction);
        if(it!=v.end())
                cout<<"Found: "<<*it<<endl;
        return 0;
}