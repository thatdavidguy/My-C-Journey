#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string s;
    cout << "Input your string" << endl;
    getline(cin,s);
    cout << "Length: " << s.length() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Capacity: " << s.capacity() << endl;
    cout << "Max size: " << s.max_size() << endl;
    s.clear();
    cout << "Empty?: " << s.empty() << endl;
    s.append("I'm back");
    cout << s << endl;
    s.insert(3,"kk");
    cout << s << endl;
    s.replace(3,5,"aa");
    cout << s << endl;
    s.clear();
    s.append("ok ok testing time");
    cout << s << endl;
    char wee[30];
    s.copy(wee,10);
    wee[10] = '\0';
    cout << "letseewee: " << wee << endl;
    return 0;
}