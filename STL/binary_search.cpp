#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = 7;
    int target;
    cout << "Enter element to search: ";cin >> target;

    int low = 0, high = n-1;
    int found = false;

    while(low <= high){
        int mid = (low + high)/2;
        
        if(arr[mid] == target){found == true;break;}
        else if(arr[mid] < target){low = mid + 1;}
        else{high = mid - 1;}
    }
    if(found != false) cout << "Element found at index " << found;
    else cout << "Element not found";

    return 0;
}

