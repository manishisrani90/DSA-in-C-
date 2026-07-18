// #include <bits/stdc++.h>
// using namespace std;
// bool isSorted(int *arr,int size){
//     if(size==0 || size==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//         bool remainingpart=isSorted(arr+1,size-1);
//             return remainingpart;
        
//     }
// }
// int main() {
//     int arr[5]={2,4,9,13,99};
//     int size=5;
//     bool ans=isSorted(arr,size);
//     if(ans){
//         cout<<"array is sorted "<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int linearSerching(int* arr,int &key,int& size){
    int i=0;
if(size==0){
    return 0;
}
if(arr[i]==key){
    cout<<" element found "<<endl;
    return 0;

}
if (arr[i]!=key){
    cout<<"element not found ";
}
i++;
linearSerching(arr+1,size-=1,key);

}
int main() {
    int size=8;
     int arr[size]={9,3,5,7,4,2,0,88};
int key=79;
linearSerching(arr,key,size);
    return 0;
}