// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr = {3, 4, 1, 6, 5, 8, 9, 7};
//     int sum = 0;
//     for (int i = 0; i < arr.size() - 2; i++)
//     {
//         if (arr[i] != arr[i + 1] &&
//             arr[i] != arr[i + 2] &&
//             arr[i + 1] != arr[i + 2])
//         {
//             sum = arr[i] + arr[i + 1] + arr[i + 2];
//         }
//         else
//         {
//             break;
//         }

//         cout << "the " << i << " sum is : " << sum << " " << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3, 4, 1, 6, 5, 8, 9, 7};
    int k = 3;

    if (arr.size() < k)
        return 0;

    // First window ka sum
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    // First window check
    if (arr[0] != arr[1] &&
        arr[0] != arr[2] &&
        arr[1] != arr[2])
    {
        cout << "Window 0 sum: " << sum << endl;
    }

    // Remaining windows
    for (int i = 1; i <= arr.size() - k; i++)
    {
        // Previous window se update
        sum = sum - arr[i - 1] + arr[i + k - 1];

        // Current window ke 3 elements distinct hain ya nahi
        if (arr[i] != arr[i + 1] &&
            arr[i] != arr[i + 2] &&
            arr[i + 1] != arr[i + 2])
        {
            cout << "Window " << i << " sum: " << sum << endl;
        }
    }

    return 0;
}