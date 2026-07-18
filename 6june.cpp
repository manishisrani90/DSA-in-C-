#include <bits/stdc++.h>
using namespace std;

int main()
{
    // mathematical formula use karege aur ye matrix banayege

    // formula= column x i + j
    // i -> represents row
    // j -> represents column
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter " << i << " " << j << endl;
            cin >> matrix[i][j];
        }
    }
    int target = 8;
    int sum_of_specific_row[3];
    for (int i = 0; i < 3; i++)
    {
int sum=0;
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == target)
            {
               sum=sum+
            }

            cout << " ";
        }
        cout << " " << endl;
    }
    cout<<"Not Found At Any Index ";

    return 0;
}

// formula = column x i + j
                                