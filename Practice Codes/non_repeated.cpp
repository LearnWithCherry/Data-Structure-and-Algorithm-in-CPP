#include <iostream>
using namespace std;

// Basic queue implementation using linked list
class Node {
public:
    char data;
    Node* next;
    Node(char c) {
        data = c;
        next = nullptr;
    }
};

class Queue {
public:
    Node* front;
    Node* rear;

    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    bool empty() {
        return front == nullptr;
    }

    void push(char c) {
        Node* newNode = new Node(c);
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

    char peek() {
        return front->data;
    }
};

int main() {
    string s = "aabcac";   // stream input
    int freq[26] = {0};
    Queue q;

    for (char ch : s) {
        freq[ch - 'a']++;
        q.push(ch);

        // remove repeating characters from front
        while (!q.empty() && freq[q.peek() - 'a'] > 1) {
            q.pop();
        }

        if (q.empty()) cout << -1 << " ";
        else cout << q.peek() << " ";
    }

    return 0;
}
