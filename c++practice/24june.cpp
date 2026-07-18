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
void insertAtK(Node *&head, int k, int data)
{
    Node *newNode = new Node(data);

    if (k == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;

    for (int i = 1; i < k - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);
    Node *node6 = new Node(60);
    Node *node7 = new Node(70);
    Node *node8 = new Node(80);
    Node *node9 = new Node(90);
    Node *head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    node9->next = NULL;
    insertAtK(head, 6, 75);
    Node *newNode = new Node(75);

    void print_ll(Node* & head){
        Node* temp=head;
        
    }

    return 0;
}