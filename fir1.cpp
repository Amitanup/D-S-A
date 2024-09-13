#include <iostream>
#include <cstring>  // For strcpy
using namespace std;

class emp {
    char name[15];
    int pay;

public:
    emp() {
        strcpy(name, ""); // Initialize with an empty string
        pay = 0;
    }

    // Overloading the << operator for output
    friend ostream& operator<<(ostream& s, const emp& e);

    // Overloading the >> operator for input
    friend istream& operator>>(istream& s, emp& e);
};

// Definition of overloaded << operator
ostream& operator<<(ostream& s, const emp& e) {
    s << "\nName: " << e.name;
    s << "\nPay: " << e.pay;
    return s;
}

// Definition of overloaded >> operator
istream& operator>>(istream& s, emp& e) {
    cout << "Enter the name: ";
    s.ignore(); // Ignore any leftover newline character
    s.getline(e.name, 15); // Use getline to read the entire line
    cout << "Enter the pay: ";
    s >> e.pay;
    return s;
}

int main() {
    emp e1, e2;
    cin >> e1 >> e2;
    cout << e1 << endl << e2;
    return 0;
}
