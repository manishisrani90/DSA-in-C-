// // trying to sort array by practice 

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int i=0,j,n;
    
// //   cout<<"Enter the value of n : ";
// //   cin>>n;
// //   int arr[n];
// //   while(i<n){
// //     cin>>arr[i];
// //     i++;
// //   }
// //   for(int i=0;i<n-1;i++){
// //     if(arr[i+1]>arr[i+2]){
// //         swap(arr[i],arr[i+1]);
// //     }
// //   }
// // for(int k=0;k<n;k++){
// //     cout<<arr[k]<<" ";
// // }
    
// //     return 0;
// // }

// bubble sort with wrong solution 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter the size of an array : ";
//     cin>>n;
//      int arr[n];
//     int k=0;
   
//     while(k<n){
//         cout<<"Enter "<<k<<" th index element ";
// cin>>arr[k];
// k++;
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr[i]<=0){
//             arr[i]*-1;
//         }
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j+1],arr[j]);
//             }
//         }
//     }
//     for(int l=0;l<n;l++){
//         cout<<arr[l]*arr[l]<<" ";
//     }
//     return 0;
// }