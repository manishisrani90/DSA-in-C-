#include <iostream>
#include <string>
#include "factorial.hpp"

using namespace std;

bool test_case(int n, const string &expected) {
    try {
        auto res = factorial(n);
        string s = res.convert_to<string>();
        if (s == expected) {
            cout << "PASS: " << n << " -> " << s << "\n";
            return true;
        } else {
            cout << "FAIL: " << n << " expected " << expected << " got " << s << "\n";
            return false;
        }
    } catch (const std::exception &e) {
        cout << "ERROR: " << n << " -> " << e.what() << "\n";
        return false;
    }
}

int main() {
    bool ok = true;
    ok &= test_case(0, "1");
    ok &= test_case(1, "1");
    ok &= test_case(5, "120");
    ok &= test_case(20, "2432902008176640000");
    ok &= test_case(50, "30414093201713378043612608166064768844377641568960512000000000000");

    cout << (ok ? "ALL TESTS PASSED\n" : "SOME TESTS FAILED\n");
    return ok ? 0 : 1;
}
