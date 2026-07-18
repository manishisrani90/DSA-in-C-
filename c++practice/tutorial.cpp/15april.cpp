// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n =10;
    
//     int arr[10]={21,32,45,65,78,99,102,107,118,121};
//     int start=0;
//     int end=n-1;
    
//     int target;
//     cin>>target;
//     int mid=(start+end)/2;
//    int found=0;
//    while(start<=end){
//     if(arr[mid]==target){
//         found=1;
//         cout << "Element found at index " << mid;
//             break;
//     }
//    if (arr[mid]<target){
//         start=mid+1;
//         mid=(start+end)/2;
//     }
//      if(arr[mid]>target){
//         end=mid-1;
//         mid=(start+end)/2;
//     }
    
//    }
   
//    return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int BS(int arr[],int start,int end,int target){
    int found=0;

    while(!found && start<=found){
      int mid=(start+end)/2;
      if(arr[mid]==target){
        found=1;

      }
       if(arr[mid]<target){
        start=mid+1;
        mid=(start+end)/2;
      }
      if(arr[mid]>target){
        end=mid-1;
        mid=(start+end)/2;
      }
    }
    void BiS(int arr[],int start,int end,int target){
        
    }
}
int main() {
    
}

