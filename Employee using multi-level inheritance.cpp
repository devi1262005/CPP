#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int age;
    string companyName;
    double salary;

public:
    Employee() : name(""), age(0), companyName(""), salary(0.0) {}

    void inputDetails() {
        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Employee Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Company Name: ";
        getline(cin, companyName);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "\nEmployee Details\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Company: " << companyName << "\n";
        cout << "Salary: $" << salary << "\n";
    }
};

int main() {
    Employee employee;


    employee.inputDetails();


    employee.displayDetails();

    return 0;
}


