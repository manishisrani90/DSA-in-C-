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
// void InsertAtHead(Node *&head, int val)
// {
//     Node *new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }
// void InserAtKthPosition(Node *&head, int val, int position)
// {
//     if (position == 0)
//     {
//         InsertAtHead(head, val);
//         return;
//     }
//     int current = 2;
//     Node *temp = head;
//     Node *new_node = new Node(val);
//     while (current != position)
//     {

//         temp = temp->next;
//         current++;
//     }
//     new_node->next = temp->next;
//     temp->next = new_node;
// }
// // void UpdaateAtKthPosition(Node *&head, int &updatedval, int &position) {
// // Node* temp=head;
// // Node* new_node=new Node(updatedval);
// // int current=2;
// // if(position==0){
// //     InsertAtHead();
// // }

// // if(){

// // }
// void RemoveTail(Node *head, Node *tail)
// {
//     Node *temp = head;
//     Node *new_node = new Node(0);
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//         if (temp->next == NULL)
//         {
//             temp = new_node;
//         }
//     }
// }
// void RemoveFromBack() {};

// // };
// void printLL(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {

//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
// }
// int main()
// {
//     Node *node1 = new Node(10);
//     Node *node2 = new Node(20);
//     Node *node3 = new Node(30);
//     Node *node4 = new Node(40);
//     Node *node5 = new Node(50);
//     Node *node6 = new Node(60);
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = node5;
//     node5->next = node6;
//     node6->next = NULL;
//     Node *head = node1;
//     Node *tail = node6;

//     InserAtKthPosition(head, 85, 3);
//     RemoveTail(head, tail);
//     printLL(head);
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
void dtoc(int n){
    if (n<=7)
        cout << n;
    else{
        dtoc(n/8);
        cout<<n%8;
    }
}
int main() {
    dtoc(13);
    return 0;
}