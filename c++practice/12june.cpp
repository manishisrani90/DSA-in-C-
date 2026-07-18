// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void print_LL(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }
// // 1. Changed return type to Node*
// Node *Reverse_At_Kth_group(Node *head, int k)
// {
//     if (head == NULL || head->next == NULL || k <= 1)
//     {
//         return head;
//     }

//     Node *temp = head;
//     Node *prev = NULL;
//     Node *curr = temp;
//     Node *next_node = NULL;
//     int count = 0;

//     while (curr != NULL && count < k)
//     {
//         next_node = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next_node;
//         count++;
//     }

//     if (next_node != NULL)
//     {
//         // 2. Fixed: Passed next_node instead of head
//         head->next = Reverse_At_Kth_group(next_node, k);
//     }

//     // 3. Fixed: Added the final return statement
//     return prev;
// }

// int main()
// {
//     Node *node1 = new Node(10);
//     Node *node2 = new Node(20);
//     Node *node3 = new Node(30);
//     Node *node4 = new Node(40);
//     Node *node5 = new Node(50);
//     Node *node6 = new Node(60);
//     Node *node7 = new Node(70);
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = node5;
//     node5->next = node6;
//     node6->next = node7;
//     node7->next = NULL;

//     Node *head = node1;

//     int k = 2;
//     print_LL(head);
//     cout<<endl;
//     Reverse_At_Kth_group(head, k);
//     cout<<endl;
//     print_LL(head);
//     return 0;
// }