#include <iostream>
 using namespace std;
 #define MAX 100
 class Stack { 
      private:
      int arr[MAX];
      int top; 
public: 
    Stack() {
            top =-1;         // stack is empty 
}
 // Push operation
 void push(int x) { 
      if (top >= MAX- 1) { 
           cout << "Stack Overflow! Cannot push " << x << endl;
 }    else  {
         top++; 
         arr[top] = x; 
        cout << x << " pushed into stack." << endl;
     }
 }
 // Pop operation
 void pop() { 
         if (top ==-1) { 
   cout<<arr[“Stack Underflow! Nothing to pop.” <<endl;
 }  else   {
          cout << arr[top] << " popped from stack." << endl; 
           top--;
       }
 }
 // Peek operation
 void peek() {
       if (top ==-1) {
             cout << "Stack is empty!" << endl;
 }   else  { 
        cout << "Top element: " << arr[top] << endl; 
     } 
} 
// Display all elements 
void display() {
        if (top ==-1) {
              cout << "Stack is empty!" << endl;
 }  else  { 
          cout << "Stack elements (top to bottom): "; 
          for (int i = top; i >= 0; i--) {
           cout << arr[i] << " ";
    }
          cout << endl; 
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
 switch (choice)  {
    case 1:
              cout << "Enter value to push: "; cin >> value;
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
