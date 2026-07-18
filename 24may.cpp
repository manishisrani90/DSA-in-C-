#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp != NULL)
    {
        
        if (temp->next == NULL)
        {
            temp->next = new_node;
            new_node->next = NULL;
        }
        temp = temp->next;
    }
}

void InsertAtHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
int main()
{
    int k = 4;
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);
    Node *node6 = new Node(60);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = NULL;
    Node *head = node1;

    // while (temp != NULL)
    // {
    //     count++;
    //     if (count == targetednode)
    //     {

    //     }
    //     temp = temp->next;
    // }
    InsertAtHead(head, 87);
    insert_at_tail(head, 121);

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            cout << temp->data;
            break;
        }
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    return 0;
}
