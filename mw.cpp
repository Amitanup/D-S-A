#include<iostream>
#include<string>
using namespace std;

class str {
    string data;
public:
    str();
    str(string s) : data(s) {}
    void show() {
        cout << data << endl;
    }
    friend str operator+(const str& s1, const str& s2);
};

str operator+(const str& s1, const str& s2) {
    return str(s1.data + " " + s2.data);
}

int main() {
    str s1("welcome"), s2("you");
    str s3 = s1 + s2;
    s3.show();
    return 0;
}