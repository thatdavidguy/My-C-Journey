#include <iostream>
using namespace std;

int main(){
    float A[] = {2.5f,5.6f,9,8,7};

    for (auto &x:A){ //referencing the values in A woth & to change them
        cout << ++x << " ";
    }
    cout << "\n";
    for (auto i:A){
        cout << i << " ";
    }
    return 0;
}