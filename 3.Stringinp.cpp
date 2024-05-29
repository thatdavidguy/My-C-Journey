#include <iostream>

using namespace std;

int main(){
    string name;
    cout << "Enter your name" << endl;
    getline(cin,name);
    std::cout << "Welcome " << name <<  std::endl;
    return 0;
}