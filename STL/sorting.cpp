// bubble sort
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;

    // bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
