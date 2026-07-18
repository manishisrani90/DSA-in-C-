#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long ans = 0;
    long long place = 1;  // place value (1, 10, 100, 1000...)

    while (n != 0) {
        int bit = n & 1;       // last bit nikalo
        ans = bit * place + ans; // bit ko sahi jagah pe jodo
        n = n >> 1;            // next bit ke liye shift karo
        place *= 10;           // next decimal place
    }

    cout << "ans is " << ans << endl;
    return 0;
}
