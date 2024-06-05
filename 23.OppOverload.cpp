#include<iostream>
using namespace std;


class Complex{
    private:
        int real;
        int imaginary;
    public:
    //constructors
        Complex(int x=0,int y=0){ 
            real = x;
            imaginary = y;
        }
        Complex(Complex &r){
            real = r.real;
            imaginary = r.imaginary;
        }
        Complex Add(Complex two){
            Complex temp;
            temp.real = two.real + real;
            temp.imaginary = two.imaginary + real;
            return temp;
        }
        void printer(){
            cout << real << " + " << imaginary << "i";
        }

};

int main()
{
    Complex one(5,5),two(5,10),three;
    three = one.Add(two);
    three.printer();
    return 0;
}