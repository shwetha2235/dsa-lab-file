 #include <iostream>
using namespace std;
 int main() { 
int M, N;                                                                               //number of rows, columns
int i, j;                                                                                  // Element position
 int base, size;                                                                   // Base address, size of each element cout << "Enter number of rows (M): ";
 cin >> M; 
cout << "Enter number of columns (N): ";
 cin >> N; 
cout << "Enter position of element (i j): "; 
cin >> i >> j; 
cout << "Enter base address: ";
 cin >> base
cout << "Enter size of each element (bytes): "; 
cin >> size;                                                                       
 // Row-major formula (0-based indexing) 
int rowMajor = base + (i * N + j) * size ;
// Column-major formula (0-based indexing)
 int columnMajor = base + (j * M + i) * size; 
cout << "\n------------------------------\n"; 
cout << "Row-MajorAddress : " << rowMajor << endl; 
cout << "Column-MajorAddress : " << columnMajor << endl; 
cout << "------------------------------\n"; 
return 0; 
}
