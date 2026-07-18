#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void printLL(Node *head)
{

    while (head != NULL)
    {
        int count = 0;

        cout << head->data << " ";

        head = head->next;
        count = count + 1;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);

    node1->next = node2;
    node1->prev = node4;
    node2->next = node3;
    node2->prev = node1;
    node3->next = node4;
    node3->prev = node2;
    node4->next = node1;
    node4->prev = node3;

    int d;
    Node *head = new Node(d);
    head = node1;

    printLL(head);

    return 0;
}