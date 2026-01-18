#include <queue>
#include<iostream>
using namespace std;

int main() {
    cout << "Max heap: ";
    priority_queue <int > pqmax;
    pqmax.push(2);
    pqmax.push(20);
    pqmax.push(5);
    pqmax.push(4);
    cout << "Size: "<<pqmax.size() << endl;
    int n = pqmax.size();
    for(int i=0; i<n; i++){
        cout << pqmax.top() <<" ";
        pqmax.pop();
    }
    cout << "\nMin heap: ";
    priority_queue <int , vector <int>, greater <int>> pqmin;
    pqmin.push(2);
    pqmin.push(20);
    pqmin.push(5);
    pqmin.push(4);
    cout << "Size: "<<pqmin.size() << endl;
    int m = pqmin.size();
    for(int i=0; i<m; i++){
        cout << pqmin.top() <<" ";
        pqmin.pop();
    }
    return 0;
}