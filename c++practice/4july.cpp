// #include <bits/stdc++.h>
// using namespace std;
// class Stack
// {
// public:
//     int arr[10];
//     int top = -1;

// public:
//     void Push_in_Stack(int value)
//     {
//         top++;
//         arr[top] = value;
//         cout << value << " Pushed in Stack " << endl;
//     };
//     void Pop_from_Stack()
//     {
//         if (top == -1)
//         {
//             cout << " Stack Underflow ";
//         }
//         else
//         {
//             cout << arr[top] << "popped" << endl;
//             arr[top] = 0;
//             top--;
//         }
//     }
//     void Show_stack_values()
// {
//     if (top == -1)
//     {
//         cout << "No value Exist in Stack";
//     }
//     else
//     {
//         for (int i = top; i >= 0; i--)
//         {
//             cout << arr[i] << endl;
//         }
//     }
// }
//    void Find_Element(int x)
// {
//     bool found = false;

//     for (int i = top; i >= 0; i--)
//     {
//         if (arr[i] == x)
//         {
//             cout << "Element Found At Index -> " << i << endl;
//             found = true;
//             break;
//         }
//     }

//     if (!found)
//     {
//         cout<<endl;
//         cout << "Element Not Found";
//     }
// }
// };

// int main()
// {
//     Stack s;
//     int x = 70;
//     s.Push_in_Stack(10);
//     s.Push_in_Stack(20);
//     s.Push_in_Stack(30);
//     s.Push_in_Stack(40);
//     s.Push_in_Stack(50);
//     s.Push_in_Stack(60);
//     s.Push_in_Stack(70);
//     s.Push_in_Stack(80);
//     s.Show_stack_values();
//     s.Find_Element(x);
//     return 0;
// }