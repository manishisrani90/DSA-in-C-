// pattern 1

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the rows ";
// cin>>n;
// for(int r=1;r<=n;r++)
// {
//     for(int c=1;c<=r;c++)
//     {
//         cout<<r;
//     }
// cout<<endl;
// }
// return 0;
// }



// pattern 2


 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the rows ";
// cin>>n;
// for(int r=1;r<=n;r++)
// {
//     for(int c=1;c<=r;c++)
//     {
//         cout<<"*";
//     }
// cout<<endl;
// }
// return 0;
// }
 
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the rows ";
cin>>n;
for(int r=1;r<=n;r++)
{
    for(int c=1;c<=r;c--)
    {
        cout<<c;
    }
    cout<<endl;
}
return 0;
}
