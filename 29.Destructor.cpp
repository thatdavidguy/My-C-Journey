#include<iostream>
using namespace std;


class Demo{
    public:
        Demo(){
            cout << "Hello"<<endl;
        }
        ~Demo(){
            cout << "Byebye"<<endl;
        }

};

void fun(){
    Demo d;
}
int main()
{
    fun();
    return 0;
}