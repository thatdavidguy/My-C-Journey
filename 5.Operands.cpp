#include <iostream>

using namespace std;

int main(){
    int a=13,b=5;
    float c = a/b;
    cout << c << endl;
    c = (float)a/b; //typecasting
    cout << c << endl;
    char d = 'G';
    cout << d << endl;
    d = d%5;
    cout << d << endl;
    return 0;
}