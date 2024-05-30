#include <iostream>
using namespace std;

int main(){
    int A[5]{1,2,3,4,5};
    int *p=A, *q=&A[4]; 
    //pointer p starts at beginning of A, q starts at 4th index

    cout << *p << endl;
    cout << p[0] << " " << p[1] << endl;
    p++;
    cout << *p << endl;
    cout << p[0] << " " << p[1] << endl;
    p--;
    cout << "Distance between original p and q\n";
    cout << q-p; //4 means that q>p 
    return 0;
}

// A[2][3] = {{1,2,3},{3,4,5}};