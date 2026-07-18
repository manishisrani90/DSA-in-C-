#include <bits/stdc++.h>
using namespace std;
int arr[6]={-4,-1,-1,0,1,2};
int main() {
    int triplet=0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<4;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    triplet++;
                }
            }
        }
    }
    cout<<triplet;
    return 0;
}