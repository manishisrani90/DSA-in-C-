#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int top;
    int *arr;
    int size;

public:
    Stack(int n)
    {
        size = n;
        arr = new int[size];
        top = -1;
    };
    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "Stack OverFlow " << endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack UnderFlow";
            return;
        }
        top--;
    }
    int peek()
{
    if(top==-1)
    {
        cout<<"Stack Empty\n";
        return -1;
    }

    return arr[top];
}
    void display(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }

};
int main()
{
    Stack dabba(109 );
  dabba.push(50);
  dabba.push(10);
  dabba.push(52);
  dabba.push(30);
  dabba.push(70);
  dabba.push(90);
  dabba.push(80);
  dabba.push(10);
  dabba.push(20);
  dabba.push(40);

  dabba.display();

    return 0;
}


