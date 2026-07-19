// reverse a string using a stack

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack <char> dabba;
    string s="String";
    // for(int i=0;i<s.length();i++){
    //     dabba.push(s[i]);
    // }
     for (int i = 0; i < s.length(); i++) {
        dabba.push(s[i]);
    }
    
    while(!dabba.empty()){
        cout<<dabba.top()<<" "<<endl;
       dabba.pop();
    }

    return 0;
}