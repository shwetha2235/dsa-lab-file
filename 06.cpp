#include<iostream>
 using namespace std;

 void insertionSort(int arr[], int n) {
        for (int i = 1; i < n; i++)
            int key = arr[i];
              int j = i- 1; 
// Shift elements greater than key to the right
 while (j >= 0 && arr[j] > key) {
           arr[j + 1] = arr[j];
           j--; 
  }
 // Insert the key at correct position 
arr[j + 1] = key;
 // Display array after each pass 
cout << "Pass " << i << ": ";
 for (int k = 0; k < n; k++) 
      cout << arr[k] << " ";
 cout << endl; 
     }
 } 
int main() { 
   int n; 
    cout << "Enter number of elements: "; 
   cin >> n; 
    int arr[n];
   cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) 
   cin >> arr[i]; 
    cout << "\n--- Insertion Sort Process---\n"; 
   insertionSort(arr, n);
  cout << "\nSorted Array: "; 
   for (int i = 0; i < n; i++) 
   cout << arr[i] << " ";
 return 0; 
} 
