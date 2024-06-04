#include<iostream>
using namespace std;


//write a Max() function template
void fun(){
    static int v = 0;
    int a = 5;
    v++;
    cout << v << " " << a << endl;;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}