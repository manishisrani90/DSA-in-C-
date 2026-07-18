#include<bits/stdc++.h>
using namespace std;
struct book{
    string title;
    int nop;
    float price;
};
int main(){
//  its direct declaration 
struct book b[5];
for(int i=0;i<5;i++){
    cout <<" enter title : "<<i<<endl;
    cin>>b[i].title;
 cout <<" enter nop : "<<i<<endl;
    cin>>b[i].nop;
     cout <<" enter price : "<<i<<endl;
    cin>>b[i].price;
}
for(int j=0;j<5;j++){
    cout<<b[j].title<<endl;
    cout<<b[j].nop<<endl;
    cout<<b[j].price<<endl;
}
}