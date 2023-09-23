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
    //unique removes consecutive duplicates in an array.
    //EXAMPLE: (1)[1,1,4,4,4,5,2,2,1,1,1]=[1,4,5,2,1]

    int arr[]={1,1,4,4,4,5,2,2,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);

    unique(v.begin(),v.end()); //First print all distinct elements then prints all left element by size.
    display(v);

    // vector<int>::iterator it=unique(v.begin(),v.end());
    // v.resize(it-v.begin()); //resize vector till distinct element.
    // display(v);





    //for unique_copy====it makes copy int other vector only of distinct element.
    vector<int> x(n);

    // unique_copy(arr,arr+n,x.begin());
    // display(x);

    vector<int>::iterator it=unique_copy(arr,arr+n,x.begin());
    x.resize(it-x.begin());
    display(x);


    return 0;
}