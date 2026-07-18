// // #include <iostream>
// // using namespace std;

// // class Stack {
// //     int arr[5];
// //     int top;

// // public:
// //     Stack() {
// //         top = -1;
// //     }

// //     void push(int x) {
// //         if (top == 4) {
// //             cout << "Stack Overflow\n";
// //             return;
// //         }

// //         top++;
// //         arr[top] = x;

// //         cout << x << " pushed at index " << top << endl;
// //     }

// //     void display() {
// //         cout << "Stack: ";

// //         for (int i = top; i >= 0; i--) {
// //             cout << arr[i] << " ";
// //         }

// //         cout << endl;
// //     }
// // };

// // int main() {

// //     Stack s;

// //     s.push(10);
// //     s.push(20);
// //     s.push(30);

// //     s.display();

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// class Stack{
// public:
// int arr[100];
// int top;
 
// Stack(){
//     top=-1;
// }
// void Push_in_Stack(int x){
//     if(top==99){
//         cout<<"Stack overflow !! ";
//         return;
//     }
//     top++;
//     arr[top]=x;

// }


// };
// int main() {
//     Stack roast;
//     roast.Push_in_Stack(22);
//     roast.Push_in_Stack(232);
//     roast.Push_in_Stack(221);
//     roast.Push_in_Stack(229);
//     roast.Push_in_Stack(9);
   




//     // Push_in_Stack(30);
//     return 0;
// }






// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     stack<int> s;
// //     int k=9;
// //     int j=0;

// //     while(j<k){
// //         s.push(j);
// //         j++;
// //     }
// //     cout<<"size of stack is : "<<s.size()<<endl;
// //     cout<<endl;
// //     for(int i=0;i<k+4;i++){
// //         cout<<s.top()<<" ";
// //        s.pop();
// //        if(s.empty()){
// //         cout<<"stack gets empty !! ";
// //     break;       }
// //     }
// //     cout<<endl;
// //     cout<<"size of stack is : "<<s.size();
// //     return 0;
// // }
