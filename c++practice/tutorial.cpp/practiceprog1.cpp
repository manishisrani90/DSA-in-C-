// program for quadrant

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int i;
// int j;
// cout<<"enter the X co-ordinate";
// cin>>i;
// cout<<"enter the Y co-ordinate";
// cin>>j;
// if(i>0 && j>0)
// {
//     cout<<"Points lies inside First quadrant ";
// }
// else if(i<0 && j>0){
//     cout<<"Points lies inside second quadrant";
// }
// else if(i<0 && j<0){
//     cout<<"Points lies inside Third quadrant";
// }
// else  {
//     cout<<"Points lies inside Fourth quadrant";}

// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int i;
// cout<<"enter the value of i";
// cin>>i;
// for(int row=4;row>1;row--){
//     for(int col=row;col>=1;col--){
// cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }

// program for factorial


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int i=0;
// int n;
// cout<<"enter value of n : ";
// cin>>n;
// long long fact=1;
// for(int k=1;k<=n;k++){
//     fact=fact*k;
// }cout<<fact;
// return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=1;
// int arr[9]={1,0,1,0,0,1,0,1,1};
// for(int i=0;i<9;i++)
// {
//     if(arr[i]==0)
//     {
//      n=n+1;
//     }
//     if(arr[i]==1)
//     {
//         continue;
//     }
// }
//  for(int j=0;j<=n;j++){
//         arr[j]=0;
//     }
//     cout<<arr[];
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter value of n";
cin>>n;
for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}
return 0;
}