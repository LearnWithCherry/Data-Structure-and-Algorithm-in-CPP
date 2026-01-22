#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Size: ";
    cin >> size;

    int arr[size];
    cout << "Elements: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Traversal: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}