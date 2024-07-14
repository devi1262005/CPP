#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream fileStream("sample.txt", ios::in);

    if (fileStream.is_open()) {
        string line;

        while (getline(fileStream, line)) {
            cout << line << endl;
        }

        fileStream.close();
    } else {
        cerr << "Error opening the file." << endl;
    }

    return 0;
}

