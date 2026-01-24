#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size: ";cin >> size;
    int* arr = new int[size];
    int elements;
    cout << "Elements: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Output: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    delete []arr;
 
    return 0;
}           