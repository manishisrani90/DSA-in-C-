// #include <bits/stdc++.h>
// using namespace std;
// class ListNode
// {
// public:
//     int data;
//     ListNode *next;

//     ListNode(int val)
//     {
//         this->data = val;
//         this->next = NULL;
//     }
// };

// void reverseList(ListNode *&head)
// {
//     ListNode *prev = NULL;
//     ListNode *curr = head;
//     ListNode *forward = NULL;
//     while (curr != NULL)
//     {
//         forward = curr->next; // store next
//         curr->next = prev;    // reverse link
       
//         prev = curr;
//         curr = forward;

//     }
//     head=prev;
// }
// int main()
// {

//     ListNode *ListNode1 = new ListNode(10);
//     ListNode *ListNode2 = new ListNode(20);
//     ListNode *ListNode3 = new ListNode(30);
//     ListNode *ListNode4 = new ListNode(40);
//     ListNode *ListNode5 = new ListNode(50);

//     ListNode *head = ListNode1;

//     ListNode1->next = ListNode2;
//     ListNode2->next = ListNode3;
//     ListNode3->next = ListNode4;
//     ListNode4->next = ListNode5;
//     ListNode5->next = NULL;

//     reverseList(head);

//     ListNode *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << " " << endl;
//         temp = temp->next;
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

int main(){
    
    return 0;
}