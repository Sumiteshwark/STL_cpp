#include <bits\stdc++.h>
using namespace std ;

template <class T>
T cmax(T a, T b)
{
    return a > b ? a : b ;
}
 
int main()
{    
    cout << "max(80, 95) = " << cmax(10, 15) << endl ;
    cout << "max('a', 'z') = " << cmax('k', 's') << endl ;
    cout << "max(11.1, 18.2) = " << cmax(11.1, 18.2) << endl ;
    cout << "max(\"Ahil\", \"Riya\") = " << cmax("Ahil", "Riya") << endl ;
    return 0 ;
}