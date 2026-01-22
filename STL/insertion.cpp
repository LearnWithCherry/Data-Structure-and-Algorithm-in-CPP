#include <iostream>
using namespace std;

int main() {
    int size , pos, ele;
    cout << "Size: ";
    cin >> size;
    int arr[size];
    cout << "Elements: "; 
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Position where you want to add it: ";
    cin >> pos;
    cout << "Element: ";
    cin >> ele;
    for(int i=size; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = ele;
    ele++;

    cout << "Traversal: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}