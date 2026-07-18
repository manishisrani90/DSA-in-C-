#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;

    cin >> n>>k;
for(int i=1;i<=n;i++)
{
    //if(i%3!=0)
        cout<<i<<" ";
    if(i%k==0)
        cout<<endl;
}
}