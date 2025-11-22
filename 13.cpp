#include <iostream>
#include <stack>
using namespace std;

class Queue {
private:
    stack<int> s1, s2;

public:
    // Enqueue operation
    void enqueue(int x) {
        s1.push(x);
        cout << x << " enqueued to queue.\n";
    }

    // Dequeue operation
    void dequeue() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is Empty! Nothing to dequeue.\n";
            return;
        }

        if (s2.empty()) {
            // Move elements from s1 to s2
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout << s2.top() << " dequeued from queue.\n";
        s2.pop();
    }

    // Peek operation
    void peek() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is Empty!\n";
            return;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout << "Front element: " << s2.top() << endl;
    }

    // Display queue elements
    void display() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is Empty!\n";
            return;
        }

        // To display correctly: move all to s2
        if (s2.empty()) {
            stack<int> temp = s1;
            stack<int> rev;

            while (!temp.empty()) {
                rev.push(temp.top());
                temp.pop();
            }

            cout << "Queue elements: ";
            while (!rev.empty()) {
                cout << rev.top() << " ";
                rev.pop();
            }
            cout << endl;

        } else {
            // s2 already has correct order
            stack<int> temp = s2;
            cout << "Queue elements: ";
            while (!temp.empty()) {
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "\n--- Queue Using Two Stacks ---\n";
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









