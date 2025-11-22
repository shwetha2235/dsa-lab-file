#include <iostream>
using namespace std;

// Node structure
struct node {
    int data;
    node* next;
};
// Queue class using linked list
class Queue {
private:
    node* front;
    node* rear;
public:
    Queue() {
        front = rear = NULL;
    }
  // Enqueue operation
    void enqueue(int value) {
        node* temp = new node();
        temp->data = value;
         temp->next = NULL;
        if (rear == NULL) {  // First element
            front = rear = temp;
            cout << value << " enqueued to queue.\n";
            return;
        }
         rear->next = temp;
        rear = temp;
        cout << value << " enqueued to queue.\n";
    }
     // Dequeue operation
    void dequeue() {
        if (front == NULL) {
            cout << "Queue is Empty! Nothing to dequeue.\n";
            return;
        }
         node* temp = front;
        cout << front->data << " dequeued from queue.\n";
        front = front->next;
         if (front == NULL)   // Queue becomes empty
            rear = NULL;
         delete temp;
    }
     // Peek at front
    void peek() {
        if (front == NULL) {
            cout << "Queue is Empty! No front element.\n";
            return;
        }
        cout << "Front element: " << front->data << endl;
    }
     // Display all elements
    void display() {
        if (front == NULL) {
            cout << "Queue is Empty!\n";
            return;
        }
         cout << "Queue elements: ";
        node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    Queue q;
    int choice, value;
     while (true) {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
               case 2:
                q.dequeue();
               break;
                case 3:
                q.peek();
                break;
              case 4:
                q.display();
                break;
           case 5:
                return 0;
        default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}


