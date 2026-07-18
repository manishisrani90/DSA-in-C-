#include<bits/stdc++.h>
using namespace std;
int main(){
    
int n;
cout<<"enter the size of array : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int count=0;
for(int j=0;j<n;j++){
    if(arr[0]==arr[j])
    {
        count++;
        
    }
    else{
        continue;
    }
   
}
 cout<<"the 55 repeated for :"<<count;
return 0;
}