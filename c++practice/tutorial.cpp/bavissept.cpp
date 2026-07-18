// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5]={64, 25, 12, 22, 11};
//     int n = 5;

//     for(int i=1;i<n;i++) {
//         int key=arr[i];
//         int j=i-1;

//         if (j>=0 && arr[j]>key) {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
//     for(int i=0;i<n;i++) cout << arr[i] << " ";
    
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
int key,i,j;
int a[10]={33,45,12,76,55,87,21,43,11,77};
for(i=1;i<10;i++)
{
    key=a[i];
    for(j=i-1;j>=0;j--)
    if(a[j>key])
    a[j+1]=a[j];
    else{
break;
    }
    a[j+1]=key;
    for(i=0;i<=10;i++){
        cout<<a[i]<<" `";
    }
return 0;}
}