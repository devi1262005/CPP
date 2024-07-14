#include <iostream>

using namespace std;

class GrantAccess {
private:
    int age;

public:
    GrantAccess(int personAge) : age(personAge) {}

    void checkAccess() {
        if (age > 18) {
            cout << "Access granted.\n";
        } else {
            throw "Error: Age must be greater than 18.";
        }
    }
};

int main() {
    int personAge;

    try {
        cout << "Enter age: ";
        cin >> personAge;

        GrantAccess access(personAge);
        access.checkAccess();
    } catch (const char* errorMessage) {
        cerr << errorMessage << endl;
    }

    return 0;
}

