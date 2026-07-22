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
        // while ke andr wali conditions bol rahi he jabtk andr ka galat na ho tabtak vo kaam karte raho
        cout<<dabba.top()<<" ";
       dabba.pop();
    }

    return 0;
}

