#include<iostream>
using namespace std; 

int factorial(int n)  {
        if (n == 0)
                return 1;           // Base case 
        return n * factorial(n- 1); // Recursive step 
}

 int main() {
          int n; cout << "Enter a number: ";
          cin >> n;
          int result = factorial(n);
          cout << "Factorial of " << n << " = " << result << endl;

           return 0;
 }
#include<iostream>
using namespace std; 

int factorial(int n)  {
        if (n == 0)
                return 1;           // Base case 
        return n * factorial(n- 1); // Recursive step 
}

 int main() {
          int n; cout << "Enter a number: ";
          cin >> n;
          int result = factorial(n);
          cout << "Factorial of " << n << " = " << result << endl;

           return 0;
 }
