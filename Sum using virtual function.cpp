#include <iostream>

using namespace std;

class Base {
protected:
    int num1, num2;

public:
    void getNumbers() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    virtual void calculateSum() = 0;
};

class Derived : public Base {
public:
    void calculateSum() override {
        cout << "Sum: " << num1 + num2 << endl;
    }
};

int main() {
    Derived derivedObj;
    derivedObj.getNumbers();
    derivedObj.calculateSum();

    return 0;
}

