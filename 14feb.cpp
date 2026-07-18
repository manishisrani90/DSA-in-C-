// //remove duplicates
// //bruteforce approach



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int counter=0;
//     for(int j=0;j<n;j++){
//         if(j+1>n){
//             continue;

//         }
//         else if(arr[j]!=arr[j+1]){
//             counter++;
//             arr[counter]=arr[j+1];
//         }
     
       
//     }
//     for(int k=0;k<counter;k++){
//         cout<<arr[k]<<" ";
//     }
//     return 0;
// }

//optimized solution

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int n=nums.size();
//         int i=0,j=1;
//         while(j<n){
//            if(nums[i]!=nums[j]){
//             i++;
//             nums[i]=nums[j];
//            }
//            j++;
//         }
//         return i+1;
//     }
// };

