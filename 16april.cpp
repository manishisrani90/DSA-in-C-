// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int row;
//     cin>>row;
//     int col;
//     cin>>col;
//     int**arr=new int*[row];
//     for(int i=0;i<row;i++){
//         arr[i]=new int[col];
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
// cin>>arr[i][j];
//         }
//     }
//      for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
// cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// #define PI 3.14

// int main() {
//     cout << PI;
// }

#include <bits/stdc++.h>
using namespace std;
int getMax(int& a,int& b){
    return (a>b) ? a:b;

}
int main() {
    int a=1,b=2;
    int ans=0;
    ans=getMax(a,b);
    a+=3;
    b+=2;
    ans=getMax(a,b);
    cout<<ans<<endl;
    return 0;
}