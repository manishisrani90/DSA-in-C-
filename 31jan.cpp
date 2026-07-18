//lec-20
//gfg
//factorial

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter the number : ";
//     cin>>n;
//     int res=1;
//     for(int i=2;i<=n;i++)
//     {
//         res=res*i;
//     }
//     cout<<res;
//     return 0;
// }

  #include <bits/stdc++.h>  
    using namespace std;
    
    int main() {
        int n;
cin >> n;

int original = n;
int rev = 0;

while (n > 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n = n / 10;
}
if (original == rev)
    cout << "Palindrome";
else
    cout << "Not Palindrome";

        return 0;
    }