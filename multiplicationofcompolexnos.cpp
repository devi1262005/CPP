#include <iostream>

template<typename T>
struct Complex {
    T real;
    T imag;

    Complex(T r, T i) : real(r), imag(i) {}

    // Overloading multiplication operator for complex numbers
    Complex<T> operator*(const Complex<T>& other) const {
        Complex<T> result;
        result.real = real * other.real - imag * other.imag;
        result.imag = real * other.imag + imag * other.real;
        return result;
    }

    // Display complex number
    void display() const {
        std::cout << real << " + " << imag << "i";
    }
};

int main() {
    // Example usage of complex number multiplication
    Complex<double> num1(2.0, 3.0);
    Complex<double> num2(4.0, -1.0);

    Complex<double> result = num1 * num2;

    std::cout << "Multiplication result: ";
    result.display();
    std::cout << std::endl;

    return 0;
}
