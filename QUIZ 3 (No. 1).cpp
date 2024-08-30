#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "The size of the array must be greater than zero." << endl;
        return 1; 
    }

    double* array = new double[size];

    // Input elements into the array
    cout << "Enter " << size << " elements of the array: " << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    // Calculate the sum 
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }

    // Calculate the average
    double average = sum / size;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0; 
}

