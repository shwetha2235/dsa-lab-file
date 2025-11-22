#include <iostream>
#include <vector>
using namespace std;

// Function to heapify a subtree rooted at index i
// n is the size of the heap
void heapify(vector<int>& heap, int n, int i) {
    int largest = i;        // Initialize largest as root
    int left = 2 * i + 1;   // left child index
    int right = 2 * i + 2;  // right child index

    // If left child exists and is greater than root
    if (left < n && heap[left] > heap[largest])
        largest = left;

    // If right child exists and is greater than current largest
    if (right < n && heap[right] > heap[largest])
        largest = right;

    // If largest is not root, swap and continue heapifying
    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapify(heap, n, largest);
    }
}

// Function to build a max heap from an unsorted array
void buildMaxHeap(vector<int>& heap) {
    int n = heap.size();
    // Start from last non-leaf node and heapify each node
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(heap, n, i);
    }
}

// Function to print the heap
void printHeap(const vector<int>& heap) {
    for (int val : heap) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    // Example input array
    vector<int> heap = {3, 9, 2, 1, 4, 5};

    cout << "Original array: ";
    printHeap(heap);

    // Build max heap
    buildMaxHeap(heap);

    cout << "Max Heap: ";
    printHeap(heap);

    return 0;
}
