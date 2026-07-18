// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the size of : ";
// cin>>n;
// for(int row=1;row<=5;row++)
// {
//     for(char col='a';col<='e';col++)
//     {cout<<col<<" ";}
//     cout<<endl;
// }
// return 0;
// // a b c d e
// // a b c d e
// // a b c d e
// // a b c d e
// // a b c d e
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//       int count=1;
//     cout<<"enter the number :";
//     cin>>n;
//     for(int row=1;row<=n;row++){
//     for(int col=1;col<=n;col++){

//         if(count<10){
//             cout<<count<<"  ";
//             count++;
//         }
//         else{
// cout<<count<<" ";
// count++;
//     }}
// cout<<endl;
//     }
// }

// 1  2  3  4  5  6
// 7  8  9  10 11 12
// 13 14 15 16 17 18
// 19 20 21 22 23 24
// 25 26 27 28 29 30
// 31 32 33 34 35 36

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "enter the size of : ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {int k=n-row;
//         for (int col = 0; col <= k; col++)
//         {
//             cout <<k;
//         }
//         for (int star = 1; star <= row; star++)
//         {
//             cout <<" ";
//         }
//         cout << endl;

//     }

// }
// // 4 4 4 4
// // 3 3 3
// // 2 2
// //1

// n-row
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// for(int row=1;row<=5;row++)
// {
//     for(int col=1;col<=5-row;col++)
//     {
// cout<<" ";
//     }
//     for(int number=1;number<=row;number++)
//     {
//         cout<<number;
//     }

//     cout<<endl;
// }
// return 0;
// }

//     1
//    12
//   123
//  1234
// 12345

// for loop row ke liye uske andr ghusey fir hamne 5 khano me 4 space print karai fir row ka number print kraya 1
// fir dusri row me gaye uske andr ghuse5 khao me  3 space di aur do element print kraye 1 ,2

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// for(int row=1;row<=8;row++)
// {
//     for(int col=1;col<=8-row;col++)
//     {
// cout<<" ";
//     }char t='A';
//     for(int number=1;number<=row;number++)
//     {
//         cout<<char (t);
//         t++;
//     }
//     cout<<endl;
// }
// return 0;
// }
// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF
// ABCDEFG

//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the value : ";
    cin >> n;
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
cout << fact << endl;
    return 0;
}    