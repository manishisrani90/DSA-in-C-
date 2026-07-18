// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
// int data;
// Node* next;
// public:
// Node(int val){
//     data=val;
//     next=NULL;

// }
// };
// int main() {
//     Node* n1 = new Node(1);
//     Node* n2= new Node(5);
//     Node* n3 =new Node(33);
    
//     n1->next = n2;
    
//   cout << n1->data << " -> " << n1->next->data;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// // Node structure
// struct Node {
//     int data;
//     Node* next;
// };

// // Insert at end
// void insert(Node* &head, int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// // Display linked list
// void display(Node* head) {
//     Node* temp = head;

//     if (head == NULL) {
//         cout << "List is empty" << endl;
//         return;
//     }

//     while (temp != NULL) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     Node* head = NULL;
//     int n, value;

//     cout << "Enter number of nodes: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << "Enter value: ";
//         cin >> value;
//         insert(head, value);
//     }

//     cout << "Linked List: ";
//     display(head);

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// int main() {
//     // Step 1: Nodes create
//     Node* n1 = new Node(1);
//     Node* n2 = new Node(2);
//     Node* n3 = new Node(3);
//     Node* n4 = new Node(4);
//     Node* n5 = new Node(5);
//     Node* n6 = new Node(6);
//     Node* n7 = new Node(7);

//     // Step 2: Connect nodes
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = n5;
//     n5->next = n6;
//     n6->next = n7;

//     // Step 3: Traverse and print
//     Node* temp = n1;

//     while(temp != NULL){
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL";

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// // print function OUTSIDE class
// void printList(Node* head) {
//     Node* temp = head;

//     while (temp != NULL) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }

//     cout << "NULL" << endl;
// }

// int main() {

//     Node *n1 = new Node(10);
//     Node *n2 = new Node(20);
//     Node *n3 = new Node(200);

//     // linking nodes
//     (*n1).next = n2;
//     (*n2).next = n3;
//     (*n3).next = NULL;

//     // head pointer
//     Node* head = n1;

//     // print list
//     printList(head);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int hoku){
    this->data=hoku;
    this->next=NULL;
}

};
int main() {
    
    return 0;
}