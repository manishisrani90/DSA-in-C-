#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
for(int r=0;r<n;r++){
    for(int c=0;c<r;c++)
    {
        cout<<" ";
    }
    for(int d=0;d<n-r;d++)
    {
        cout<<(r+1);
    }
    cout<<endl;
}
return 0;
}