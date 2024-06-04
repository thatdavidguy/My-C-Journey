#include<iostream>
using namespace std;


class Rectangle{
    private:
        int x;
        int y;
    public:
    //constructors
        Rectangle(int xe=0,int ye=0){ 
            setX(xe);
            setY(ye);
        }
        Rectangle(Rectangle &r){
            x = r.x;
            y = r.y;
        }
        //functions
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
    cout << r1.area() << endl;
    cout << r1.circumference()<<endl<<endl;
    Rectangle r3(10,5);
    cout << r3.area() << endl;
    cout << r3.circumference()<<endl<<endl;
    Rectangle r2;
    Rectangle *ptr;
    ptr=&r2;
    ptr->setX(10);
    ptr->setY(10);
    cout << ptr->area() << endl;
    cout << ptr->circumference()<<endl<<endl;
    Rectangle r4(*ptr);
    cout << r4.area() << endl;
    cout << r4.circumference()<<endl<<endl;
    return 0;
}