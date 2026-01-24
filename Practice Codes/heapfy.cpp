#include <iostream>
using namespace std;

class Heap {
public:
    int arr[100];
    int size;

    Heap() {
        arr[0] = -1; 
        size = 0;
    }

    void insertMax(int value) {
        size++;
        int index = size;
        arr[index] = value;

        while (index > 1) {
            int parent = index / 2;

            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    void insertMin(int value) {
        size++;
        int index = size;
        arr[index] = value;

        while (index > 1) {
            int parent = index / 2;

            if (arr[parent] > arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                break;
            }
        }
    }
    
    void deleteMax() {
        if (size == 0) return;

        arr[1] = arr[size];
        size--;

        int index = 1;

        while (true) {
            int left = index * 2;
            int right = index * 2 + 1;

            if (left > size) break;

            int largerChild = left;
            if (right <= size && arr[right] > arr[left]) {
                largerChild = right;
            }

            if (arr[index] < arr[largerChild]) {
                swap(arr[index], arr[largerChild]);
                index = largerChild;
            } else {
                break;
            }
        }
    }

    void deleteMin() {
        if (size == 0) return;

        arr[1] = arr[size];
        size--;

        int index = 1;

        while (true) {
            int left = index * 2;
            int right = index * 2 + 1;

            if (left > size) break;

            int smallerChild = left;
            if (right <= size && arr[right] < arr[left]) {
                smallerChild = right;
            }

            if (arr[index] > arr[smallerChild]) {
                swap(arr[index], arr[smallerChild]);
                index = smallerChild;
            } else {
                break;
            }
        }
    }
    
    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap h;

    int total, elements;
    cout << "Total size: ";
    cin >> total;
    // cout << "Elements: ";
    // for(int i=0; i<total; i++){
    //     cin >> elements;
    //     h.insertMax(elements);
    // }
    // cout << "MAX HEAP: ";
    // h.print();
    cout << "Elements: ";
    for(int i=0; i<total; i++){
        cin >> elements;
        h.insertMax(elements);
    }
    cout << "MIN HEAP: ";
    h.print();
    return 0;
}
