#include <iostream>
using namespace std;

// Node for string queue
class Node {
    public:
        string data;
        Node* next;
    Node(string s) {
        data = s;
        next = nullptr;
    }
};

// Queue implementation using linked list
class Queue {
public:
    Node* front;
    Node* rear;

    Queue(){
        front = rear = nullptr;
    }

    bool empty() {
        return front == nullptr;
    }

    void push(string s) {
        Node* newNode = new Node(s);
        if (empty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void pop() {
        if (empty()) return;
        Node* temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr) rear = nullptr;
    }

    string peek() {
        return front->data;
    }
};

int main() {
    int N;
    cin >> N;

    Queue q;
    q.push("1");

    for (int i = 0; i < N; i++) {
        string current = q.peek();
        q.pop();

        cout << current << " ";

        // Generate next two binary numbers
        q.push(current + "0");
        q.push(current + "1");
    }

    return 0;
}
