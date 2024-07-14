#include <iostream>

class SumCalculator {
public:
    int n;

    SumCalculator(int num) {
        n=num;
    }

    int sumOfSquares() {
        int sum = 0;

        for (int i = 1; i <= this->n; i++) {
            sum += i * i;
        }

        return sum;
    }
};

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    SumCalculator calculator(n);
    int result = calculator.sumOfSquares();

    std::cout << "Sum of squares of the first " << n << " natural numbers: " << result << std::endl;

    return 0;
}
