#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void sortDescending(vector<T>& elements) {
    sort(elements.rbegin(), elements.rend());
}

template <typename T>
void displayElements(const vector<T>& elements) {
    for (const T& element : elements) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers = {25, 44, 30, 69, 96};

    cout << "Original list: ";
    displayElements(numbers);

    sortDescending(numbers);

    cout << "Sorted list in descending order: ";
    displayElements(numbers);

    return 0;
}

