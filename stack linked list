#include <iostream>
using namespace std;

 // Node structure
 struct Node {
         int data;
          Node* next;
 };

 // Stack class using linked list 
class Stack {
 private: 
         Node* top;            // Pointer to top of stack
 public: 
         Stack() { top = nullptr;       // Stack is initially empty  
}

 // Push operation
 void push(int value) {
          Node* newNode = new Node();                      //Allocate memory dynamically                                     newNode->data = value;
          newNode->next = top; 
           top = newNode; 
           cout << value << " pushed into stack." << endl; 
}

// Pop operation 
void pop() {
            if (top == nullptr) { 
            cout << "Stack Underflow! Nothing to pop." << endl; 
              return;
 }  

Node* temp = top; 
cout << top->data << " popped from stack." << endl; 
top = top->next;
 delete temp;                 // Free memory
 }

// Peek operation 
 void peek() { 
            if (top == nullptr) {
            cout << "Stack is empty!" << endl; 
} else { 
            cout << "Top element: " << top->data << endl;
     }
 }

// Display all elements
 void display() { 
            if (top == nullptr) {
                  cout << "Stack is empty!" << endl;
                  return; 
         } 

cout << "Stack elements (top to bottom): ";
 Node* temp = top;
 while (temp != nullptr) {
             cout << temp->data << " ";
            temp = temp->next; 
        } 
cout << endl; }

// Destructor to free memory
 ~Stack() {
            while (top != nullptr) {
                      Node* temp = top; 
                      top = top->next; 
                   delete temp;
            }
       }
 };

int main() {
         Stack s;
         int choice, value; 
          while (true) { 
                      cout << "\n--- Stack Menu---\n";
                      cout << "1. Push\n2. Pop\n3. Peek\n4. Display Stack\n5. Exit\n";
                     cout << "Enter your choice: ";
 cin >> choice; 
switch (choice) { 
        case 1: 
          cout << "Enter value to push: "; 
           cin >> value; 
            s.push(value); 
   break;
          case 2:
              s.pop(); 
   break; 
            case 3: 
            s.peek(); 
break;
        case 4:
            s.display(); 
break;
        case 5:
         cout << "Exiting program." << endl;
        return 0;
    default:
 cout << "Invalid choice! Try again." << endl;
      } 
}
}


