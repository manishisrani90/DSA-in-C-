// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int m=4,n=4;
//     int arr[m][n];
//     for(int p=0;p<m;p++){
//         for(int q=0;q<n;q++){
//             cin>>arr[p][q];
//         }
//     }

//     int maxSum = INT_MIN;
//     for(int i = 0; i < m; i++){
//         int sum = 0;
//         for(int j = 0; j < n; j++){
//             sum += arr[i][j];
//         }
//         maxSum = max(maxSum, sum);
//     }

//     cout << maxSum;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int m = 3, n = 4;
    int arr[m][n];

    // input
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // sine wave print
    for(int j = 0; j < n; j++){
        if(j % 2 == 0){
            for(int i = 0; i < m; i++){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for(int i = m - 1; i >= 0; i--){
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}