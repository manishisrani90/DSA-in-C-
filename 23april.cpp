#include<bits/stdc++.h>
using namespace std;
void reverseString(string &name,int& i,int&j){
   
if(i<j){



if(name[i]!=name[j]){
cout<<"string is not plindrome";
}

cout<<name<<" is palindrome "<<endl;





}
else{
    
cout<<"string is palindrome";}


};

int main(){
string name="manish";
int i=0;
int j=name.size()-1;
reverseString(name,i,j);
}
 