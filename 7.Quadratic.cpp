#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a,b,c,x_one,x_two;
    cout << "Solve ax^2 + bx + c = 0" << endl;
    cout << "Input a,b,c" << endl;
    cin >> a >> b >> c;
    x_one = (-b + sqrt(b*b-(4*a*c)))/(2*a);
    x_two = (-b - sqrt(b*b-(4*a*c)))/(2*a);
    cout << "1st Soltion for x " << x_one << endl;
    cout << "2nd Soltion for x " << x_two << endl;
    return 0;
}