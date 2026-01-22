#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Size: ";
    cin >> size;
    int key;
    cout << "key: " ; cin >> key;

    int arr[size];
    cout << "Elements: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int index = -1;
    cout << "Finding elemets......."<< endl;
    for(int i=0; i<size; i++){
        if (key == arr[i]){cout << "Element found at Index: " << i << "\nElement is "<< arr[i];} 
    if (!key){cout << "Element not found..";}}
    return 0;
}