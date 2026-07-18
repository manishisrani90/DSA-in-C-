#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[8]={7,4,5,9,1,3,8,5};
for(int i=0;i<7;i++){
 int temp;
    for(int j=0;j<7;j++){
        if(arr[j] > arr[j+1])
        {
    temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
}

    }
}
for(int ik=0;ik<8;ik++){
    cout<<arr[ik]<<" ";
}
return 0;
}