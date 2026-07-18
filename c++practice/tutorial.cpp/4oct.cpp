// #include <bits/stdc++.h>
// using namespace std;

// int getMin(int n , int num[]) {
//     int mi = INT_MAX;
//     for (int i = 0; i < n; i++) {
//         if (num[i] < mi) {
//              num[i]=mi;
//         }
//     }
//     return mi;
// }

// int getMax(int n , int num[]) {
//     int ma = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (num[i] > ma) {
//             num[i]=ma;
//         }
//     }
//     return ma; // <-- moved outside the loop
// }

// int main() {
//     int size;
//     cin >> size;               // user inputs number of elements
//     int num[100];              // holds upto 100 ints
//     for (int i = 0; i < size; i++) {
//         cin >> num[i];         // read each element
//     }
//     cout << "maximum value is : " << getMax(size,num) << endl;
//     cout << "minimum value is : " << getMin(size,num) << endl;
//     return 0;
// }

