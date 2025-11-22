#include <iostream>
 using namespace std;
 #define MAX 100 class Queue { 
private: 
int arr[MAX]; int front, rear; 
public:
 Queue() { front =-1; rear =-1; 
} 
// Enqueue operation
 void enqueue(int x) { 
if (rear == MAX- 1) {
 cout << "Queue Overflow! Cannot insert " << x << endl;
 return;
 }
 if (front ==-1) {
 // first element 
front = 0; 
}
 rear++; 
arr[rear] = x;
 cout << x << " inserted into queue." << endl; 
}
 // Dequeue operation
 void dequeue() {
 if (front ==-1 | front > rear) { 
cout << "Queue Underflow! Nothing to dequeue." << endl;
 return; 
}
 cout << arr[front] << " removed from queue." << endl; 
front++;
 if (front > rear) { 
// reset queue if empty
 front = rear =-1;
 }
 }
 // Peek operation (front element)
 void peek() {
 if (front ==-1) { 
cout << "Queue is empty!" << endl; 
return; 
} 
cout << "Front element: " << arr[front] << endl; 
}
 // Display all elements 
void display() { 
if (front ==-1) {
 cout << "Queue is empty!" << endl; 
return; 
}
 cout << "Queue elements (front to rear): ";
 for (int i = front; i <= rear; i++)   {
 cout << arr[i] << " "; 
}
 cout << endl; 
}
 }; 
int main() { 
Queue q;
 int choice, value; while (true) {
 cout << "\n--- Queue Menu---\n"; 
cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display Queue\n5. Exit\n"; 
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
 cout << "Exiting program." << endl;
 return 0; 
 default:
 cout << "Invalid choice! Try again." << endl; 
}
 }
 }
