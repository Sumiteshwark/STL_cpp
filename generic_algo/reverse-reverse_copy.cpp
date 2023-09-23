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

    // //for reverse and iter_swap.
    // vector<int> v={1,2,3,4,5,6,7,8,9,10};
    // display(v);
    // // reverse(v.begin(),v.end());
    // // iter_swap(v.begin(),v.end()-1); //same as reverse , iter_swap is same.
    // display(v);




    //for reverse_copy.
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>a(10);
    display(a);
    reverse_copy(arr,arr+n,a.begin());
    display(a);

    return 0;
}