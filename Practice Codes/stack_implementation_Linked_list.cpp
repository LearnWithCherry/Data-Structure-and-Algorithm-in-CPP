#include <iostream>
using namespace std;

// Node structure for linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};
// Stack class using linked list
class Stack {
    Node* top; // points to the top of the stack

public:
    Stack() {
        top = NULL;
    }

    // Push: Insert an element at the top
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to stack\n";
    }

    // Pop: Remove top element
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow (empty stack)\n";
            return;
        }
        Node* temp = top;
        cout << top->data << " Popped from the Stack.\n";
        top = top->next;
        delete temp;
    }

    // Peek: View top element
    void peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element: " << top->data << endl;
    }

    // Display: Print all stack elements
    void display() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        cout  << "Stack Elements are: ";
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor: delete all nodes
    // ~Stack() {
    //     while (top != NULL) {
    //         Node* temp = top;
    //         top = top->next;
    //         delete temp;
    //     }
    // }
};

// Main function to test stack
int main() {
    Stack s;
    cout << "After Pushing Elemnts into the stack: \n";
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.peek();

    s.pop();
    s.display();

    return 0;
}
