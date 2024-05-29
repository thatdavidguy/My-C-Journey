#include <iostream>
using namespace std;

int main(){
    float a,b;
    cout << "Input first number" << endl;
    cin >> a;
    cout << "Input second number" << endl;
    cin >> b;
    if (a>b){
        cout << "First number is bigger" << endl;
    } else if (a==b) {
        cout << "Numbers are equal" << endl;
    } else {
        cout << "Second number is bigger" << endl;
    }
    return 0;
}