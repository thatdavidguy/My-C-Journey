#include <iostream>
using namespace std;

int main(){
    int a = 25;
    int &y = a;
    y++;
    cout << y << " " << a;
    return 0;
}