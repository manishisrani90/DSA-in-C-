// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // // char poha[]="manish";
// // // char samosa[]="israni";
// // // strcat(poha,samosa);
// // // cout<<poha;
// // // return 0;
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // void funky(){
// //     int a=10;
// //     static int b=10;
// //     cout<<a<<ends<<b<<endl;
// //     ++a; ++b;
// // }
// // int main(){
// //     funky();
// //     funky();
// // return  0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// struct wake{
//     int marks;
//     float avg;
//     double salary;
// };
// union wakeup{
//     int marks;
//     float avg;
//     double salary;
// };
// int main(){
// struct wake k;
// union wakeup l;
// cout<<"structure size = "<<sizeof(k)<<endl;
// cout<<"union size = "<<sizeof(k);
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void patterntriangle(int n){
//     for(int r=0;r<=n;r++)
//     {
// for(int c=0;c<=r;c++)
// {
//     cout<<"* ";
// }
// cout<<endl;
//     }

// }
// int main(){
// int t;
// cin>>t;
// for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//     patterntriangle(n);
// }
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int count=1;
//     for (int r = 0; r < 5; r++)
//     {
//         for (int c = 0; c < 5; c++)
//         {
//             cout << count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;

    int r = 1;

    while (r <= n)
    {
        int c = 1;
        while (c <= n)
        {
            cout << c << " ";
            c = c + 1;
        }
        cout << endl;
        r = r + 1;
    }
    return 0;
}