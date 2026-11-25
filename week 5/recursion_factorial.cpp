#include <iostream>
using namespace std;

int factorialRecursive(int n) {

if (n <= 1) {
return 1;
}

return n * factorialRecursive(n - 1);
}

int factorialTail(int n, int accumulator = 1) {
// Base case: if n is 0 or 1, return the accumulator
if (n <= 1) {
return accumulator;
}

return factorialTail(n - 1, n * accumulator);
}

// The main function
int main() {
int num;

// Ask the user for a number
std::cout << "Enter a number to calculate factorial: ";
std::cin >> num;

// Validate input
if (num < 0) {
std::cout << "Factorial is not defined for negative numbers." << std::endl;
return 1;
}

// Calculate using simple recursion
std::cout << "\nUsing simple recursion:" << std::   endl;
std::cout << " " << num << "! = " << factorialRecursive(num) << std::endl;

// Calculate using tail recursion
std::cout << "\nUsing tail recursion:" << std::endl;
std::cout << " " << num << "! = " << factorialTail(num) << std::endl;

// Comparison
std::cout << "\n--- Comparison ---" << std::endl;
std::cout << "Simple recursion: Clear, matches mathematical definition." << std::endl;
std::cout << "Tail recursion: More efficient for large n (compiler optimization)." << std::endl;
return 0;
}