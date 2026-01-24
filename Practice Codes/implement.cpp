#include <iostream>
using namespace std;

class Heap {
public:
    int arr[100];        // heap array (1-based indexing)
    int size;            // total elements in heap
    Heap() {
        arr[0] = -1;     // dummy value, heap starts from index 1
        size = 0;        // heap is empty initially
    }
    void insertvalue(int value) {
        size++;                 // increase heap size
        int index = size;       // position to insert value
        arr[index] = value;     // place the value at the end

        // move upward to fix max-heap property
        while (index > 1) {     
            int parent = index / 2;   // parent position

            if(arr[parent] < arr[index]) {    // child > parent
                swap(arr[parent], arr[index]); // swap them
                index = parent;                // move index upward
            }else{
                return;   // heap property is correct
            }
        }
    }
    void deletevalue() {
        if (size == 0){ 
            cout << "Heap Empty.\n";
            return;
        }
        arr[1] = arr[size];   // move last element to root
        size--;               // reduce size
        int i = 1;            // start fixing from the root
        // move downward to fix heap order
        while (i <= size) {
            int leftindex = 2 * i;         // left child
            int rightindex = 2 * i + 1;    // right child

            // check left child exists AND left child is bigger
            if (leftindex <= size && arr[i] < arr[leftindex]) {
                swap(arr[i], arr[leftindex]); // swap parent with left
                i = leftindex;                // move to left child
            }
            // check right child exists AND right child is bigger
            else if (rightindex <= size && arr[i] < arr[rightindex]) {
                swap(arr[i], arr[rightindex]); // swap parent with right
                i = rightindex;                // move to right child
            }
            else {
                return;   // no child is bigger, heap is correct
            }
        }
    }

    void print() {  // print heap elements
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    Heap h;

    int totalElements;
    cin >> totalElements;

    int values;
    for(int i=0; i<totalElements; i++){
        cin >> values;
        h.insertvalue(values);
    }
    h.print();
    return 0; 
}
