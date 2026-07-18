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
void addTwoLL(Node *&head)
{
    Node *temp = head;
    int count = 0;
    int sumData = 0;

    while (temp != NULL)
    {
        count++;
        if (count % 2 != 0)
        {
            sumData = sumData + temp->data;
        }
        temp = temp->next;
    }
    cout << sumData << " ";
};

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
    addTwoLL(head);
    return 0;
}


// recursion practice


