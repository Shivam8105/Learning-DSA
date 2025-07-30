#include <iostream>
#include <string>
using namespace std;

int main() {
    string life = "No relationships, just peace, goals, and solo trips!";
    size_t pos = life.find("love");

    if (pos != string::npos) {
        cout << "'love' found at index: " << pos << endl;
    } else {
        cout << "'love' not found in life... because you're nalla 😎" << endl;
    }

    return 0;
}
