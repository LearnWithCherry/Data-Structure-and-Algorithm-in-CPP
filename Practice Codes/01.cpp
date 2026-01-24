#include <iostream>
using namespace std;

int main() {
    int size;
    int even = 0;
    cout << "Size: "; cin >> size;
    int arr[size];
    cout << "Elements: ";
    for (int i=0; i<size; i++){
        cin >> arr[i];
    }
    for(int i=0; i<size; i++){
        if(arr[i] % 2 == 0){
            even += arr[i];
        }
    }
    cout <<"Sum of even Elements: ";
    cout << even;
    return 0;

}