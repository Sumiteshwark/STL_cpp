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
    srand(unsigned(time(0))); //srand uses to print different random value each time otherwise same random number is printed.
    vector<int>a={3,4,5,6,7};
    display(a);
    random_shuffle(a.begin(),a.end());
    display(a);
    return 0;
}