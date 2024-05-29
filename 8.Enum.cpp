#include <iostream>
using namespace std;

enum day {mon=1,tue,wed,thu,fri,sat,sun};
typedef int marks;
typedef float prices;

int main(){
    marks m1;
    prices stock1;
    day d=mon;
    cout << "Today's day: " << d << endl;
    d = tue;
    cout << "Tomorrow's day: " << d << endl;
    return 0;
}