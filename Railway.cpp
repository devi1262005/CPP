#include <iostream>
#include <string>

using namespace std;

class Ticket {
private:
    string passengerName;
    int age;
    string destination;
    double fare;

public:
    Ticket() : passengerName(""), age(0), destination(""), fare(0.0) {}

    void inputDetails() {
        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Passenger Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Fare: ";
        cin >> fare;
    }

    void displayDetails() {
        cout << "\nTicket Details\n";
        cout << "Passenger Name: " << passengerName << "\n";
        cout << "Age: " << age << "\n";
        cout << "Destination: " << destination << "\n";
        cout << "Fare: $" << fare << "\n";
    }
};

int main() {
    Ticket ticket;

    ticket.inputDetails();


    ticket.displayDetails();

    return 0;
}

