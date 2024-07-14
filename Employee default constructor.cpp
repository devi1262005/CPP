#include<iostream>

using namespace std;

int count = 0;

class alpha {
public:
    alpha() {
        count++;
        cout << "\nNo. of objects created: " << count;
    }

    ~alpha() {
        cout << "\nNo. of objects destroyed: " << count;
        count--;
    }
};

int main() {

    cout << "Enter main: ";

    alpha a1, a2, a3, a4;

    {
        cout << "Enter block 1";
        alpha a5;
    }

    {
        cout << "Enter block 2";
        alpha a6;
    }

    cout << "\nRe-enter";

    return 0;
}
