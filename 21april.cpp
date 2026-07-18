// #include <bits/stdc++.h>
// using namespace std;
// int countnums(int n){
//     if(n==0){
//         return 1;
//     }
//     countnums(n-1);
//     cout<<n<<endl;
// }
// int main() {

//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     countnums(n);
    
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int fib(int n){
    
//     int a=0,b=1,next=0;
//     for(int i=0;i<n;i++){
//         next=a+b;
//         a=b;
//         b=next;
        
//         cout<<next<<endl;
//     }
// }
// int main() {
//     int n;
//     cin>>n;

//     int ans=fib(n);
//     cout<<ans;
//     return 0;
// }

//climb stairs

#include <bits/stdc++.h>
using namespace std;
int is_sorted(int arr[],int &n)
{
int i=0;
int j=i+1;
    while(j<n){


if(arr[i]>arr[j]){
cout<<"array is not sorted ";
return 0;
}
else{
    cout<<" array is sorted ";
    return 1;
}
i++,j++;
};}
int main() {
    int arr[]={32,12,67,98,43,77,99,11,26};
    int n=9;
    is_sorted(arr,9);
    return 0;
}