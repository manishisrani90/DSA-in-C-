#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {7, 4, 5, 9, 1, 3, 8, 5};
    int n = 8;
    int count = 0; // total swaps or comparisons count

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                count++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Total swaps: " << count << endl;

    return 0;
}
