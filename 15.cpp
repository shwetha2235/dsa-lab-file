#include <iostream>
using namespace std;

// Node structure
struct node {
    int data;
    node* next;
};

node* head = NULL;

// Insert at end (helper to build list)
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
}

// Display function
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

// Delete by value
void deleteByValue(int value) {
    if (head == NULL) {
        cout << "List is empty. Nothing to delete.\n";
        return;
    }

    // If head is the value
    if (head->data == value) {
        node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node with value " << value << " deleted.\n";
        return;
    }

    node* temp = head;
    while (temp->next != NULL && temp->next->data != value)
        temp = temp->next;

    if (temp->next == NULL) {
        cout << "Value not found in list.\n";
        return;
    }

    node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;

    cout << "Node with value " << value << " deleted.\n";
}

// Delete by position
void deleteByPosition(int pos) {
    if (pos <= 0) {
        cout << "Invalid position.\n";
        return;
    }

    if (head == NULL) {
        cout << "List is empty. Nothing to delete.\n";
        return;
    }

    // Delete head node
    if (pos == 1) {
        node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node at position " << pos << " deleted.\n";
        return;
    }

    node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of range.\n";
        return;
    }

    node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;

    cout << "Node at position " << pos << " deleted.\n";
}

int main() {
    int choice, value, pos;

    while (true) {
        cout << "\n--- Singly Linked List Deletion Menu ---\n";
        cout << "1. Insert at End\n";
        cout << "2. Delete by Value\n";
        cout << "3. Delete by Position\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertAtEnd(value);
                break;

            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                deleteByValue(value);
                break;

            case 3:
                cout << "Enter position to delete: ";
                cin >> pos;
                deleteByPosition(pos);
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







