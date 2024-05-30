#include <iostream>
using namespace std;

int main(){
    int A[5], n =5, element;
    bool notfound = true;
    cout << "Input elements of list" << endl;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    cout << "Enter element you wish to know the index of :";
    cin >> element;

    for (int i=0; i<n; i++){
        if (A[i] == element){
            cout << "Found at index: " << i;
            notfound = false;
        }
    }
    if (notfound){
        cout << "Not found in Array";
    }
    return 0;
}

// A[2][3] = {{1,2,3},{3,4,5}};