#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=6;
    int arr[n]={7,9,3,0,-2,1};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
if(arr[i]>arr[j]){
    swap(arr[i],arr[j]);
} }
    }
    for (int k=0;k<n;k++){
         cout<<arr[k]<<" ";
    }
    return 0;
}