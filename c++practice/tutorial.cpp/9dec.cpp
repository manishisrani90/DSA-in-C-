#include<bits/stdc++.h>
using namespace std;


int main(){
int arr[4][4];

for(int row=0;row<4;row++)
{
  for(int col=0;col<4;col++)
  {
    cin>>arr[row][col];
  }
  cout<<endl;
}
int sum=0;
for(int i=0;i<4;i++)
{
  for(int j=0;j<4;j++)
  {
    if(i==j)
    {
      sum=sum+arr[i][j];
    }
  }
  cout<<endl;
}
  cout<<sum;

return 0;
}