// #include <bits/stdc++.h>
// using namespace std;
// void printSS(vector<int> arr, vector<int> &ans, int i)
// {
//     if (i == arr.size())
//     {
//         for (int i = 0; i < ans.size(); i++)
//         {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//         return;
//     }
//     ans.push_back(arr[i]);
//     printSS(arr, ans, i + 1);

//     //

//     ans.pop_back();
//     printSS(arr, ans, i + 1);
//     return;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3};
//     vector<int> ans;
//     int i = 0;
//     printSS(arr, ans, i);

//     return 0;
// }

//  WRITE IN COPY

// void solve(..., int i){

//     // base case

// //     // include
// //     take element
// //     solve(i+1)

// //     // backtrack
// //     remove element

// //     // exclude
// //     solve(i+1)
// // }

// #include <bits/stdc++.h>
// using namespace std;
// int printSS(vector<int> arr, vector<int> &ans, int i)
// {
//     if (i == arr.size())
//     {
//         for(int x: ans){
//             cout<<x<<" ";

//         }
//          cout<<endl;
//         return 1;
//     }
//     ans.push_back(arr[i]);
//     printSS(arr,ans,i+1);

//  ans.pop_back();
//   printSS(arr,ans,i+1);
// return 1 ;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3,4};
//     vector<int> ans;
//     int i = 0;
//     printSS(arr, ans, i);
//     return 1 ;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
// Node(int data){
//     val=data;
//     next=NULL;
// }

// };
// int main() {
//     Node* n1=new Node(10);
//     cout<<n1->val<<" "<<n1->next<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
Node(int val){
    data=val;
    next=NULL;
}};
int main()
{
Node* n1=new Node(10);
Node* n2=new Node(20);
Node* n3=new Node(30);
Node* n4=new Node(40);
Node* n5=new Node(50);

n1->next=n2;
n2->next=n3;
n3->next=n4;
n4->next=n5;
n5->next=NULL;

Node* head=new Node(NULL);
Node* temp=head;
head->next=n1;
while(temp!=NULL){
cout<<temp->data<<" "<<endl;

temp=temp->next;

    // cout<<head->next<<" || "<<endl;
}
    return 0;
}