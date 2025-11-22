#include <iostream>
using namespace std;

class ArrayOperations {
private:
    int arr[100];
    int size;
public:
    // Constructor to initialize array
    ArrayOperations(int n) {
        size = n;
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
  // Traverse function
    void traverse() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
         cout << endl;
    }
       // Insert element at position
    void insert(int pos, int value) {
        if (pos < 1 || pos > size + 1) {
            cout << "Invalid position!\n";
            return;
        }
          for (int i = size; i >= pos; i--) {
            arr[i] = arr[i - 1];
              arr[pos - 1] = value;
        size++;
        cout << "Element inserted successfully.\n";
    }
     // Delete element from position
    void remove(int pos) {
        if (pos < 1 || pos > size) {
            cout << "Invalid position!\n";
            return;
        }
          for (int i = pos - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
         size--;
        cout << "Element deleted successfully.\n";
    }
};
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
     ArrayOperations obj(n);
     while (true) {
        cout << "\n--- MENU ---\n";
        cout << "1. Traverse Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                obj.traverse();
                break;

            case 2: {
                int pos, value;
                cout << "Enter position to insert: ";
                cin >> pos;
                cout << "Enter value to insert: ";
                cin >> value;
                obj.insert(pos, value);
                break;
            }
               case 3: {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                obj.remove(pos);
                break;
            }
               case 4:
                return 0;
             default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}












