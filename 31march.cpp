// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> nums={7,8,9,10,1,2,3,4,5,6};
//     vector<int> temp;
//     int n=nums.size()-1;
//     int k=1;
//    for(int j=0;j<n;j++){
   
   
//    for(int i=0;i<n;i++ ){
//         nums[i%k]=temp[i];
        
//     }
//     nums=temp;

//     if(is_sorted(nums.begin(), nums.end()))
//         cout << "Array is sorted" << endl;}
//         for(int l=0;l<n;l++){
//             cout<<temp[l]<<" ";
//         }
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> nums = {3, 1,9,6, 4, 2};

//     int count = 0;
//     int n = nums.size();

//     for(int i = 0; i < n; i++) {
//         if(nums[i] > nums[(i + 1) % n]) {
//             count++;
//         }
//     }

//     if(count <= 1)
//         cout << count <<"Valid (Sorted + Rotated)";
//     else
//         cout <<count << "Invalid";

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arrey = {1,2,3,4,5,6};
//     int n = arrey.size();
//     int k = 2; // rotate by 2
//     vector<int> arrey2(n);

//     for(int i = 0; i < n; i++){
//         arrey2[(i+k)%n] = arrey[i];
//     }

//     for(int i = 0; i < n; i++){
//         cout << arrey2[i] << " ";
//     }
//     return 0;
// }