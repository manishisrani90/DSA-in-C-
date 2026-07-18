// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data; // Creation of DABLI ll
//     Node *next;
//     Node *prev;
//     Node(int val)
//     {
//         this->data = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// int getLength(Node *head)
// {
//     Node *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         temp = temp->prev;
//         count++;
//     }
//     cout << endl;
//     cout << count << endl;
// };
// void insertAtHead(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }

// int main()
// {
//     Node *n1 = new Node(10);
//     Node *n2 = new Node(20);
//     Node *n3 = new Node(30);
//     n1->next = n2;
//     n1->prev = NULL;
//     n2->prev = n1;
//     n2->next = n3;
//     n3->prev = n2;
//     n3->next = NULL;

//     Node *head = n3;
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->prev;
//     }
//     cout << endl;

//     return 0;
// }


