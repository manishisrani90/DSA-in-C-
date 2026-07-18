//2nd feb
//palindrome 

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int original = n;
//     int rev = 0;
//     while (n > 0)
//     {

//         int lastdigit = n % 10;
//         rev = rev * 10 + lastdigit;
//         n = n / 10;
//     }
//     if (original == rev)
//     {
//         cout << "its palindrome ";
//     }
//     else
//     {
//         cout << "not a palindrome ";
//     }
//     return 0;
// }


// re-tried factorial program

// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n){
//     long long fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;

//     }
//     cout<<"the factorial of given number is "<<fact;
//     return fact;
// }
// int main(){
// factorial(6);
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number to Find Factorial : "<<endl;
    cin>>num;
    
    long long fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    
    int counter=0;
    while(fact%10==0){
        counter=counter+1;
        fact=fact/10;
    }
    
    cout<<counter;
    
    return 0;
}