// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter elements : ";
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maxi = arr[0];
//     int mini = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > maxi)
//         {
//             maxi = arr[i];
//         }
//         if (arr[i] < mini)
//         {
//             mini = arr[i];
//         }
//     }
//     cout << "the maximum number is" << maxi << endl;
//     cout << "the minimum number is" << mini << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// void update(int arr[],int n){
//     cout<<"inside the function"<<endl;
// for(int i=0;i<3;i++)
// {
//     cout<<arr[i]-2<<" "<<endl;
// }
// cout<<"going back to the main  function"<<endl;
// }

// int main(){

// int arr[3]={2,3,4};
// for(int i=0;i<3;i++)
// {
//     cout<<arr[i]<<" "<<endl;
// }
// update (arr,3);
// return 0;}

// Pass by Reference ka matlab: Original variable ka "address" dena, copy nahi banani

// Pass by Value: Tumhe ek book di, maine photocopy ki, tum original book change karo - meri photocopy pe farak nahi padega

// Pass by Reference: Tumne mujhe library ka address diya, main directly library jaake book change kar sakta hoon

// #include<bits/stdc++.h>
// using namespace std;
// int numret(){
//     int key,i;
// for(i=0;i<5;i++){
//     if(arr[i]==key)
//     {
//         cout<<"element found at index : "<<i<<endl;
//     }
// };
// int main(){
// int key,i;

// cout<<"enter the element to find : ";
// cin>>key;
// int arr[5]={32,76,88,41,98};
// }
// return 0;
// }

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {                // Use == for comparison, not =
            return true; // Return true instead of 1
        }
    }
    return false; // Return false instead of 0
}
int main()
{
    int arr[10] = {5, 7, -2, 10, 22, 2, 6, 5, 22, 1}; // Fixed array initialization
    cout << "Enter the element to search for: " << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key); // Assign the return value correctly
    if (found)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is not present" << endl; // Added else condition for clarity
    }
    return 0; // Added return statement
}