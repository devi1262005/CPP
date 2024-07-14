#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    // Overload + operator for addition
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Function to display the complex number
    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    // Create two complex numbers
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    // Add the complex numbers using operator overloading
    Complex result = num1 + num2;

    // Display the result
    std::cout << "Result of addition: ";
    result.display();

    return 0;
}

