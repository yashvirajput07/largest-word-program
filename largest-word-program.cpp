#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str, word, largest = "";

    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);

    while (ss >> word) {
        if (word.length() > largest.length()) {
            largest = word;
        }
    }

    cout << "Largest word: " << largest << endl;

    return 0;
}
