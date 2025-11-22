#include <iostream>
using namespace std;

#define MAX 100
class BinaryTree {
private:
    int tree[MAX];
    int size;
public:
    BinaryTree() {
        size = 0;
        for (int i = 0; i < MAX; i++)
            tree[i] = -1;   // -1 means empty
    }
     // Insert level-wise
    void insert(int value) {
        if (size >= MAX) {
            cout << "Tree is full!\n";
            return;
        }
        tree[size] = value;
        cout << value << " inserted at index " << size << endl;
        size++;
    }
     // Display array representation
    void displayArray() {
        if (size == 0) {
            cout << "Tree is empty.\n";
            return;
        }
        cout << "\nArray Representation:\n";
        for (int i = 0; i < size; i++)
            cout << "Index " << i << " : " << tree[i] << endl;
    }
   // Display tree representation (Parent -> children)
    void displayTree() {
        if (size == 0) {
            cout << "Tree is empty.\n";
            return;
        }
        cout << "\nBinary Tree Structure:\n";
        for (int i = 0; i < size; i++) {
            cout << "Parent (" << tree[i] << ")";
              int left = 2 * i + 1;
            int right = 2 * i + 2;
             if (left < size)
                cout << " | Left = " << tree[left];
            else
                cout << " | Left = NULL";
              if (right < size)
                cout << " | Right = " << tree[right];
            else
                cout << " | Right = NULL";

            cout << endl;
        }
    }
};

int main() {
    BinaryTree bt;
    int choice, value;

    while (true) {
        cout << "\n--- Binary Tree Using Array (DSA) ---\n";
        cout << "1. Insert Node\n";
        cout << "2. Display Array\n";
        cout << "3. Display Tree Structure\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                bt.insert(value);
                break;
            case 2:
                bt.displayArray();
                break;
  case 3:
                bt.displayTree();
                break;
          case 4:
                return 0;
           default:
                cout << "Invalid choice! T
