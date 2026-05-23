#include <iostream>
#include <string>
using namespace std;

int main() {

    // Creating string
    string name = "Rohit";

    // Length of string
    cout << "Length: " << name.length() << endl;

    // Combining strings
    string firstName = "Rohit";
    string lastName = "Kumar";

    string fullName = firstName + " " + lastName;

    cout << fullName << endl;

    // Accessing characters using index
    cout << name[0] << endl;
    cout << name[1] << endl;

    return 0;
}