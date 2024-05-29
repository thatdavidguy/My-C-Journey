#include <iostream>
// iostream is a library containing Input/Output stuff (like:cout)

//for beginners namespace std; 

int main(){
    int a,b,c;
    std::cout << "Enter two numbers" << std::endl;
    std::cin >> a >> b;
    c = a +b;
    std::cout << "Sum is: " << c <<  std::endl;
    return 0;
}