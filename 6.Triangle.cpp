#include <iostream>

using namespace std;

int main(){
    float a,b,area;
    cout << "Input length then height" << endl;
    cin >> a >> b;
    area = a*b*(0.5);
    cout << "Area of triangle is: " << area << endl;
    return 0;
}