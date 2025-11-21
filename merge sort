#include <iostream>
using namespace std
// Function to print the array
 void printArray(int arr[], int left, int right) {
 for (int i = left; i <= right; i++) 
cout << arr[i] << " "; 
cout << endl;
 }
 // Merge function
 void merge(int arr[], int left, int mid, int right) {
 int n1 = mid- left + 1;
 int n2 = right- mid;
 int L[n1], R[n2]; 
for (int i = 0; i < n1; i++)
 L[i] = arr[left + i];
 for (int j = 0; j < n2; j++)
 R[j] = arr[mid + 1 + j];
 int i = 0, j = 0, k = left; 
while (i < n1 && j < n2) {
 if (L[i] <= R[j]) arr[k++] = L[i++];
 else 
arr[k++] = R[j++];
 } 
while (i < n1) arr[k++] = L[i++];
 while (j < n2) arr[k++] = R[j++]; 
}
 // Recursive Merge Sort with steps
 void mergeSort(int arr[], int left, int right) { 
if (left < right) {
 int mid = left + (right- left) / 2; 
cout << "Dividing: ";
 printArray(arr, left, right);
 mergeSort(arr, left, mid); 
mergeSort(arr, mid + 1, right); 
merge(arr, left, mid, right); 
cout << "Merging: ";
 printArray(arr, left, right); 
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
 cout << "\n--- Merge Sort Process---\n\n"; 
mergeSort(arr, 0, n- 1); 
cout << "\nSorted Array: "; 
for (int i = 0; i < n; i++)
 cout << arr[i] << " "; 
return 0; 
}
