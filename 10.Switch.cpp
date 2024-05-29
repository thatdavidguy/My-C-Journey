#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Input amount of A you need (up to 3)" << endl;
    cin >> a;
    switch(a)
    {
        case 1:
            cout << "A" << endl;
            break;
        case 2:
            cout << "AA" << endl;
            break;
        case 3:
            cout << "AAA" << endl;
            break;
        default:
            cout << "Woah";
    }
    return 0;
}