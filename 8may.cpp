// #include <bits/stdc++.h>
// using namespace std;
// int retSum(int n){
// if(n==0){
//     return 0;
// }

// return n + retSum(n-1);
// };
// int main() {
//     int n=9;
//     cout<<retSum(n);

//     return 0;
// }

// Reverse an array Using Recursison

// #include <bits/stdc++.h>
// using namespace std;
// void revArr(int arr[], int i, int j)
// {
//     if (i >= j)
//     {
//         return;
//     }

//     swap(arr[i], arr[j]);

//     revArr(arr, i + 1, j - 1);
// }
// int main()
// {
//     int arr[6] = {3, 4, 5, 6, 7, 8};
//     int i = 0, j = 5;
//     revArr(arr, i, j);
//     for (int k = 0; k < 6; k++)
//     {
//         cout << arr[k] << " ";
//     }

//     return 0;
// }