#include <iostream>
#include <string>
using namespace std;

int main() {

    // String variable
    string name;

    // Taking full line input
    cout << "Enter Full Name: ";

    getline(cin, name);

    // Printing name
    cout << "Your Name is: " << name << endl;

    return 0;
}