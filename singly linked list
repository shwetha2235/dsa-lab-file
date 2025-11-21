#include <iostream>
using namespace std;

// Node structure
struct node {
    int data;
    node* next;
};

node* head = NULL;

// Insert at beginning
void insertAtBeginning(int value) {
    node* newNode = new node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    cout << value << " inserted at beginning.\n";
}

// Insert at end
void insertAtEnd(int value) {
    node* newNode = new node();
    newNode->data = value;
    newNode->next = NULL;
 if (head == NULL) {
        head = newNode;
    } else {
        node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    cout << value << " inserted at end.\n";
}

// Insert at middle (given position)
void insertAtPosition(int value, int pos) {
    if (pos <= 0) {
        cout << "Invalid position!\n";
        return;
    }

    if (pos == 1) {
        insertAtBeginning(value);
        return;
    }

    node* newNode = new node();
    newNode->data = value;

    node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Position out of range!\n";
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    cout << value << " inserted at position " << pos << ".\n";
}

// Display the linked list
void display() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int choice, value, pos;

    while (true) {
        cout << "\n--- Singly Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at Position (Middle)\n";
        cout << "3. Insert at End\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertAtBeginning(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                cout << "Enter position: ";
                cin >> pos;
                insertAtPosition(value, pos);
                break;

            case 3:
                cout << "Enter value: ";
                cin >> value;
                insertAtEnd(value);
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
