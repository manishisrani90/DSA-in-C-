// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << " enter the value : ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int space = 1; space <= row - 1; space++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= n - row + 1; col++)

//         {
//             cout <<"O";
//         }

//         cout << endl;
//     }
//     return 0;
// }

// O O O O
//   O O O
//     O O
//       O

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int a=0,b=1,n;

// cout<<"enter the number : ";
// cin>>n;
// for(int i=0;i<n;i++){                         //fibonacci series
//     int nextNumber=a+b;
//     cout<<nextNumber<<" ";
//     a=b;
//     b=nextNumber;  
// }
// return 0;
// }
  
// to write all prime numbers between 1 to n 


// #include<iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter n: ";
  
//     cin>>n;

//     for(int i = 2; i <= n; i++) {
//         bool isPrime = true;


//         for(int j = 2; j*j <= i; j++) 


//         {
//             //jab inner loop chalega tab hi j ka increment hoga

//             if(i % j == 0) {
//                 isPrime = false;     
//                 break;
//             }
//         }



//         if(isPrime)
//             cout << i << " ";
//     }
//     return 0;
// }
