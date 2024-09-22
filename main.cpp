#include <iostream>
using namespace std;

int main() {
    // Initialize the sum to 0
    double sum = 0.0;

    // Looping through odd numbers for numerators and add a fraction to the sum
    for (int numerator = 1, denominator = 3; numerator <= 95; numerator += 2, denominator += 2) {
        sum += static_cast<double>(numerator) / denominator;
    }

    // Output the result of the sum
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
