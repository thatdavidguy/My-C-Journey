#include<iostream>
using namespace std;


class Rectangle{
    public:
        int x;
        int y;

        int area(){
            return(x*y);
        }
        int circumference(){
            return(2*x+2*y);
        }
};

int main()
{
    Rectangle r1;
    r1.x = 10;
    r1.y = 5;
    cout << r1.area() << endl;
    cout << r1.circumference();
    return 0;
}