#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Get size of first array from the user
    int size1;
    cout << "Enter the size of the first array: ";
    cin >> size1;

    // Get elements of the first array from the user
    vector<int> arr1(size1);
    cout << "Enter elements of the first array:\n";
    for (int i = 0; i < size1; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr1[i];
    }

    // Get size of the second array from the user
    int size2;
    cout << "Enter the size of the second array: ";
    cin >> size2;

    // Get elements of the second array from the user
    vector<int> arr2(size2);
    cout << "Enter elements of the second array:\n";
    for (int i = 0; i < size2; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr2[i];
    }

    // Merge the two arrays
    vector<int> mergedArray;
    mergedArray.reserve(size1 + size2);
    mergedArray.insert(mergedArray.end(), arr1.begin(), arr1.end());
    mergedArray.insert(mergedArray.end(), arr2.begin(), arr2.end());

    // Sort the merged array
    sort(mergedArray.begin(), mergedArray.end());

    // Display the sorted merged array
    cout << "Sorted Merged Array:\n";
    for (const int& element : mergedArray) {
        cout << element << " ";
    }

    return 0;
}
