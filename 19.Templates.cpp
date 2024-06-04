#include<iostream>
using namespace std;


//write a Max() function template
template<class T>
T Max(T a,T b, T c = 0)
{
    return(a+b+c);
}

int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f)<<endl;
    cout<<Max(10,5,6);
    return 0;
}