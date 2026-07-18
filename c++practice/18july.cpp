#include <iostream>
using namespace std;

class Stack {
    int arr[5];
    int top;

public:

    Stack() {
        top = -1;
    }


    // Insert element
    void push(int value) {

        if(top == 4) {
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = value;
    }


    // Remove element
    void pop() {

        if(top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Removed: " << arr[top] << endl;
        top--;
    }


    // Show top element
    int peek() {

        if(top == -1)
            return -1;

        return arr[top];
    }


    // Display stack
    void display(){

        for(int i=top;i>=0;i--){
            cout << arr[i] << endl;
        }
    }
};


int main(){

    Stack s;


    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);


    cout<<"Stack:\n";
    s.display();


    cout<<"Top element: ";
    cout<<s.peek();

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"hello git commit";
    return 0;
}