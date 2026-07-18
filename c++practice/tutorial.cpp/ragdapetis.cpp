#include <iostream>
#include "factorial.hpp"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "Enter a number (>=0): " << flush;
    if (!(cin >> n)) {
        cerr << "\nInvalid input. Please enter an integer.\n";
        return 1;
    }

    if (n < 0) {
        cerr << "Factorial is not defined for negative numbers.\n";
        return 1;
    }

    try {
        auto result = factorial(n);
        cout << "Factorial = " << result << '\n';
    } catch (const std::exception &e) {
        cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}
