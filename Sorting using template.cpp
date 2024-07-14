#include <iostream>
using namespace std;

template<class T>
void sort(T a[], int n) {
    int i, j;
    T temp;
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    cout << "\n\t--------After Sorting---------\n\n";
    for (i = 0; i < n; i++)
        cout << " " << a[i];
}

int main() {
    int i, n, a[25], ch;
    float b[25];
    bool exit = false;

    cout << "\n\t------SORTING USING TEMPLATE-----------\n\nEnter the number of elements: ";
    cin >> n;

    do {
        cout << "\n\t--------MENU---------\n\n\t1.Integer Sorting\n\t2.Floating point Sorting\n\t3.Exit\n\nEnter your choice:";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "\n\t------INT TYPE-----------\n\n";
                cout << "\nEnter elements:\n";
                for (i = 0; i < n; i++)
                    cin >> a[i];
                sort(a, n);
                break;
            case 2:
                cout << "\n\t------FLOAT TYPE-----------\n\n";
                cout << "\nEnter elements:\n";
                for (i = 0; i < n; i++)
                    cin >> b[i];
                sort(b, n);
                break;
            case 3:
            default:
                cout << "Exiting..... \n\t\t\t\t\t\t...\n";
                exit = true;
        }
    } while (!exit);

    return 0;
}

