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
};

class Addition : public Base {
public:
    int add() {
        return num1 + num2;
    }
};

class Subtraction : public Base {
public:
    int subtract() {
        return num1 - num2;
    }
};

class Calculator : public Addition, public Subtraction {
public:
    void displayResults() {
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
    }
};

int main() {
    Calculator calc;
    calc.getNumbers();
    calc.displayResults();

    return 0;
}

