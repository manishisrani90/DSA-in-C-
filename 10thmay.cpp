#include <bits/stdc++.h>
using namespace std;

void printSubsequence(int index, vector<int>& temp, int arr[], int n)
{
    // Base Case
    // Jab pura array traverse ho jaye
    if(index == n)
    {
        // Empty subsequence
        if(temp.size() == 0)
        {
            cout << "{}";
        }
        else
        {
            // Print current subsequence
            for(int x : temp)
            {
                cout << x << " ";
            }
        }

        cout << endl;
        return;
    }

    // ---------------- TAKE ----------------

    // Current element ko le lo
    temp.push_back(arr[index]);

    // Next index pe jao
    printSubsequence(index + 1, temp, arr, n);

    // ---------------- NOT TAKE ----------------

    // Backtrack
    temp.pop_back();

    // Current element skip karo
    printSubsequence(index + 1, temp, arr, n);
}

int main()
{
    int arr[] = {1,2,3,4};

    int n = 4;

    vector<int> temp;

    printSubsequence(0, temp, arr, n);

    return 0;
}