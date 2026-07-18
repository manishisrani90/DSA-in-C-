// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> temp(n);

//         for(int i = 0; i < n; i++) {
//             temp[(i + k) % n] = nums[i];
//         }

//         nums = temp;
//     }
// };

// int main() {
//     Solution obj;
    
//     vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
//     int k = 3;

//     obj.rotate(nums, k);

//     for(int x : nums) {
//         cout << x << " ";
//     }

//     return 0;
// }

//practice: rotate array

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector <int> arr1={4,5,6,7,8,9,10};
//     vector <int> arr2(arr1.size());
//     int j=arr1.size();
//     int l=2;
//     for(int i=0;i<arr1.size();i++){
//         arr2[(i+l)%j]=arr1[i];
//     }
//     arr1=arr2;
//     for(int m=0;m<arr1.size();m++){
//         cout<<arr1[m]<<" ";
//     }
//     return 0;
// }
