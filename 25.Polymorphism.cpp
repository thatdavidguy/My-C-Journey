#include<iostream>
using namespace std;

class base{
    public:
        virtual void fun(){ //AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA 
            cout << "Base FUN?!!" << endl;
        }
};

class derived:public base{
    public:
        void fun(){
            cout << "Derived FUN?!!" << endl;
        }
};

int main()
{
    base *p = new derived();
    p -> fun();
    return 0;
}