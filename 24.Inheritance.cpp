#include<iostream>
using namespace std;

class line{
    private:
        int len;
    public:
        line(int assign_len = 0){
            len = assign_len;
        }
        void setLen(int assignlen){
            len = assignlen;
        }
        void display(){
            cout << len << endl;
        }
        int getLen(){
            return(len);
        }
};

class square: public line{
    private:
        int breadth;
    public:
        square(int assign_len = 0, int assign_breadth = 0){
            setLen(assign_len);
            breadth = assign_breadth;
        }
        int area(){
            return(breadth*getLen());
        }
};


int main()
{
    line l(10);
    square s(10,10);
    l.display();
    cout << s.area();
    return 0;
}