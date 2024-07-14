#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    bool newWord = true;

    for (int i = 0; i < input.length(); ++i) {
        if (isalpha(input[i]) && newWord) {
            input[i] = toupper(input[i]);
            newWord = false;
        }
        else if (!isalpha(input[i])) {
            newWord = true;
        }
    }

    cout << "Capitalized string: " << input;

    return 0;
}


