#include <iostream>

class sample {
    int x;

public:
    void getdata() {
        std::cout << "Enter the value of x: ";
        std::cin >> x;
    }

    void show() {
        std::cout << "x=" << x << std::endl;
    }

    bool operator==(sample op);
};

bool sample::operator==(sample op) {
    return x == op.x;
}

int main() {
    sample s1, s2;

    s1.getdata();
    s2.getdata();

    s1.show();
    s2.show();

    if (s1 == s2)
        std::cout << "s1 and s2 are equal" << std::endl;
    else
        std::cout << "s1 and s2 are not equal" << std::endl;

    return 0;
}
