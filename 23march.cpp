#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6]={6,3,9,5,2,0};
    for(int i=0;i<6;i++){
       int minIndex=i;
       for(int j=i+1;j<5;j++){
        if(arr[j]<arr[minIndex]){
           minIndex=j;
        }
       }
       swap(arr[minIndex],arr[i]);
       cout<<arr[i]<<" ";
    }
    return 0;
}