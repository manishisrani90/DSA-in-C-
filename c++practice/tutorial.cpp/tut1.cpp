#include<bits/stdc++.h>
using namespace std;
int main(){
int baksa[5]={4,2,5,3,9};  //array bana li
int ans=INT_MAX;    // ans sabse bada value(infinity) banaya
for (int i=0;i<5;i++)  
{                   //loop chalayga
  if(baksa[i]<ans)  // 
  ans=baksa[i];         
}
cout<<ans;
return 0;
}