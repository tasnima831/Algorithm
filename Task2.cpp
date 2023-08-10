#include <iostream>
using namespace std;

int arraySum(int arr[], int size, int index) {
    if (index == size) {
        return 0;
    }
    
    return arr[index] + arraySum(arr, size, index + 1);
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    
    int sum = arraySum(arr, size, 0);
    cout << "Sum of the elements in the array: " << sum << endl;
    
    return 0;
}
