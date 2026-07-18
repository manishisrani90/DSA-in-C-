// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[6]={3,4,5,9,7,2};
//     int count=0;
//     for(int i=0;i<6;i++){
//         if(arr[i+1]>arr[i]){
//             count++;

//         }
//     }
//       cout<<count<<endl;
//         if(count==5){
//             cout<<" Array is sorted ";
//         }
//         else{
//             cout<<"Array is Not sorted";
//         }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int isSorted(vector<int> &arr, int &count, int i)
// {
//     if (i > arr.size())
//     {
//         return count;
//     }
//     if (arr[i] < arr[i + 1])
//     {
//         count++;
//     }
//      if (count == arr.size() - 1 || count == arr.size() )
//         {
//             cout << "Array is Sorted";
//             return count;
//         }
//         if (count >= 0 || count < arr.size() - 2)
//         {
//             cout << "Array is Not Sorted";
//             return count;
//         }
//     return isSorted(arr, count, i + 1);
// }
// int main()
// {
//     vector<int> arr = {3, 4, 5, 6, 7, 8};
//     int count = 0;
//     int i = 0;
//     isSorted(arr,  count, i);
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// bool isSorted(vector<int>& arr, int i)
// {
//     // Base Case
//     if (i == arr.size() - 1)
//     {
//         return true;
//     }

//     // Current pair check
//     if (arr[i] > arr[i + 1])
//     {
//         return false;
//     }

//     // Recursive call
//     return isSorted(arr, i + 1);
// }

// int main()
// {
//     vector<int> arr = {3, 4, 5, 6, 7, 8};

//     if (isSorted(arr, 0))
//     {
//         cout << "Array is Sorted";
//     }
//     else
//     {
//         cout << "Array is Not Sorted";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void BinarySearch(int arr[],int &left,int &right,int &mid,int &target){

//   if(left > right){
//         cout << "Not Found";
//         return;
//     }
    
// if(arr[mid]>target){
//     BinarySearch(arr,left,right,mid,target);
// }
// if(arr[mid]<target){
//     left=mid+1;
// }
// if(arr[mid]==target){
//    cout<<"Target Found";
//    return;
// }
// if(arr[mid]!=target){
//     cout<<"Not Found";
//     return;
// }


// BinarySearch(arr,left,right,mid,target);
// return;
// }
// int main() {
//     int arr[8]={12,14,17,19,23,27,29,43};
//     int left=0;
//     int right=7;
//     int mid=left+(right-left)/2;
//     int target=17;
//     BinarySearch(arr,left,right,mid,target);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int BS(int arr[],int start,int end,int target){
//    if(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(arr[mid]<target){
//            cout<<"target found at right side"<<endl;
//             return BS(arr,mid+1,end,target);
             
//         }
//          if(arr[mid]>target){
//            cout<<"target found at left side "<<endl;
//             return BS(arr,start,mid-1,target);
            
//         }
     
//     }
    
//     return -1;

// }
// int main() {
//     int arr[10]={3,5,7,9,11,13,15,17,19,21};
//     int start=0;
//     int end=9;
//     int target=9;
    
//     int ans=BS(arr,start,end,target);
//     cout<<ans<<endl;
//         return 0;
// }