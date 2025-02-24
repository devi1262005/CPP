#include<iostream>
using namespace std;

class A
{
public:
    int x, y;
};

int main()
{
    A ob;
    // Pointer to object
    A *ptr = &ob;
    int A::*p1 = &A::x;
    int A::*p2 = &A::y;

    // Using pointer to object to access data member, pointed by a pointer
    ptr->*p1 = 30;
    // Using pointer to object to access data member, pointed by a pointer
    ptr->*p2 = 40;

    cout << "The value of x is : " << ptr->*p1 << "\n";
    cout << "The value of y is : " << ptr->*p2 << "\n";

    return 0;
}
