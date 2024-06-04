#include<iostream>
using namespace std;


class Rectangle{
    private:
        int x;
        int y;
    public:
        void setX(int xe){
            x = xe;
        }
        void setY(int ye){
            y = ye;
        }
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
    r1.setX(10);
    r1.setY(5);
    cout << r1.area() << endl;
    cout << r1.circumference()<<endl<<endl;
    Rectangle r2;
    Rectangle *ptr;
    ptr=&r2;
    ptr->setX(10);
    ptr->setY(10);
    cout << ptr->area() << endl;
    cout << ptr->circumference()<<endl<<endl;
    return 0;
}