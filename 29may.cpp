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
void Delete_at_head(Node *&head)
{

    Node *temp = head;
    head = head->next;
    free(temp);
}
void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            cout << temp->data << " --| ";
            temp = temp->next;
        }
        else
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
}
void delete_at_kth_position(Node *&head)
{
    Node *temp = head;
    int count = 1;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    int n = 2;
    int k = 0;
    Node *new_node = temp->next;
    while (temp != NULL)
    {
        k++;
        if (k == count - n)
        {
            new_node = new_node->next;
            temp->next = new_node->next;
        }
        temp = temp->next;
        new_node = new_node->next;
    }
}

int main()
{
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
    Delete_at_head(head);
    // delete_at_kth_position(head);
    printLL(head);

    return 0;
}