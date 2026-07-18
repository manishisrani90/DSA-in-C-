// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a number: ";
// cin>>n;
// for(int row=1;row<=n;row++){
//     for(int col=row;col>=1;col--){
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }

// // 1
// // 21
// // 321
// // 4321

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// char ch='A';
// cout<<"Enter a number: ";
// cin>>n;
// for(int row=1;row<=n;row++){
//     for(int col=1;col<=n;col++){

//         cout<<ch<<" ";
//     }
//     ch=ch+1;
//     cout<<endl;
// }
// return 0;
// }

// A A A A
// B B B B
// C C C C
// D D D D

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;
   
    for (int row = 1; row <= n; row++)
    { char ch = 'A';
        for (int col = 1; col <= n; col++)
        {
            cout << ch << " ";
            ch = ch + 1; 
        } 
        cout << endl;
    }
    return 0;
} 