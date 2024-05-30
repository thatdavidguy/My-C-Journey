#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char S[10] = "Hello!";
    string s = "Byebye!";
    cout << S << endl;
    cout << s << endl; // cannot use strlen for this
    cout << "Input a string of characters" << endl;
    char ss[10];
    cin.getline(ss,10);
    cout << "Length of your string: " << strlen(ss) << endl;
    strcat(ss,S);
    cout << ss << endl << "enter string class getline ";
    getline(cin,s);
    return 0;
}