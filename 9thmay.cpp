// multiple recursion - if more than 2 calls happended in the porgram  inside a function is called multiple recursion

// #include <bits/stdc++.h>
// using namespace std;
// int fibcal(int n){
// if(n==0 ){
//     return 0;
// }
// if( n==1){
//     return 1;
// }

// return fibcal(n-1)+fibcal(n-2);
// };
// int main() {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     fibcal(n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int retFib(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    int l = retFib(n - 1);
    int sl = retFib(n - 2);
    return retFib(n - 1)+retFib(n - 2);
}
int main()
{
int n=9;
int ans=retFib(n);
cout<<ans<<endl;

    return 0;
}