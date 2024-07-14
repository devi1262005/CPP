#include <iostream>

class MyClass {
public:
    MyClass(int value) : data(value) {}

    void printData() {
        // Use the 'this' pointer to access the member variable
        std::cout << "Data from this object: " << this->data << std::endl;
    }

    void setData(int value) {
        // Use the 'this' pointer to access and modify the member variable
        this->data = value;
    }

private:
    int data;
};

int main() {
    // Create an instance of MyClass
    MyClass obj1(42);

    // Call member function using the 'this' pointer
    obj1.printData();

    // Modify data using the 'this' pointer
    obj1.setData(99);

    // Call member function again to see the updated data
    obj1.printData();

    return 0;
}
