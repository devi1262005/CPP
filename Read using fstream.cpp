#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("sample.txt");

    if (inputFile.is_open()) {
        string line;

        while (getline(inputFile, line)) {
            cout << line << endl;
        }

        inputFile.close();
    } else {
        cerr << "Error opening the file." << endl;
    }

    return 0;
}

