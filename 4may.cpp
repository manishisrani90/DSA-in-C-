// // #include <bits/stdc++.h>
// // using namespace std;

// // class Node
// // {
// // public:
// //     int data;   // value store karega
// //     Node *next; // next node ka address

// // public:
// //     Node(int data)
// //     {
// //         this->data = data; // data assign
// //         next = NULL;       // initially next null
// //     }
// // };

// // void InsertAtHead(Node *&head, int d)
// // {
// //     Node *temp = new Node(d); // naya node bana
// //     temp->next = head;        // old head se link
// //     head = temp;              // head update
// // }

// // void print(Node *&head)
// // {
// //     Node *temp = head; // start from head

// //     while (temp != NULL) // jab tak list khatam nahi
// //     {
// //         cout << temp->data << " "; // data print
// //         temp = temp->next;         // next pe jao
// //     }

// //     cout << endl; // next line
// // }
// // // void InsertAtTail(Node *& tail,int d){
// // //     Node *temp = new Node(d);
// // //     temp->next=tail;
// // //     tail = temp;

// // // }
// // void InsertAtTail(Node *&tail, int d)
// // {
// //     Node *temp = new Node(d); // naya node
// //     tail->next = temp;        // old tail se link
// //     tail = temp;              // tail update
// // }
// // void InsertAtPosition(Node* & head,int position,int d){
// // Node* temp = head;
// // int cnt=1;
// // while(cnt<position-1){
// //     temp=temp->next;
// //     cnt++;
// // }
// // Node* nodetoinsert = new Node(d);
// // nodetoinsert->next=temp->next;
// // temp->next=nodetoinsert;
// // }

// // int main()
// // {
// //     Node *n1 = new Node(10); // node 1
// //     Node *n2 = new Node(25); // node 2
// //     Node *n3 = new Node(55); // node 3
// //     Node *n4 = new Node(76); // node 4
// //     n1->next = n2;           // link n1 -> n2
// //     n2->next = n3;           // link n2 -> n3
// //     n3->next = n4;           // link n3 -> n4

// //     Node *head = n1; // head set
// //     Node *tail = n4;

// //     print(head); // print list

// //     InsertAtHead(head, 5); // 5 add at head
// //     InsertAtTail(tail,699);
// //     InsertAtTail(tail,3333);
// //     print(head); // print updated list
// //     InsertAtPosition(head,3,989);
// //     return 0;
// // }
// // // Insert at middle

// #include <bits/stdc++.h>
// using namespace std;

// // ================= NODE CLASS =================
// class Node
// {
// public:
//     int data;   // node ka value store karega
//     Node *next; // next node ka address store karega

//     // Constructor
//     Node(int data)
//     {
//         this->data = data; // jo value mile wo assign karo
//         this->next = NULL; // initially next NULL hota hai
//     }
// };

// // ================= INSERT AT HEAD =================
// void InsertAtHead(Node *&head, int d)
// {
//     Node *temp = new Node(d); // step 1: naya node create karo
//     temp->next = head;        // step 2: new node ka next old head pe point kare
//     head = temp;              // step 3: head ko new node bana do
// }

// // ================= INSERT AT TAIL =================
// void InsertAtTail(Node *&tail, int d)
// {
//     Node *temp = new Node(d); // step 1: naya node banao
//     tail->next = temp;        // step 2: old tail ka next new node pe point kare
//     tail = temp;              // step 3: tail update ho jaye
// }

// // ================= INSERT AT POSITION =================
// void InsertAtPosition(Node *&head, int position, int d)
// {
//     // agar position 1 hai → head insertion
//     if (position == 1)
//     {
//         InsertAtHead(head, d);
//         return;
//     }

//     Node *temp = head; // traversal ke liye pointer
//     int cnt = 1;

//     // position-1 tak jao
//     while (cnt < position - 1)
//     {
//         temp = temp->next; // next node pe move karo
//         cnt++;
//     }

//     // new node create karo
//     Node *nodeToInsert = new Node(d);

//     nodeToInsert->next = temp->next; // new node ka next set
//     temp->next = nodeToInsert;       // previous node se link karo
// }

// // ================= DELETE NODE =================
// void deleteNode(Node *&head, int position)
// {
//     // agar first node delete karna hai
//     if (position == 1)
//     {
//         Node *temp = head;   // current head store
//         head = head->next;   // head ko next pe shift karo
//         delete temp;         // memory free karo
//         return;
//     }

//     Node *curr = head;
//     Node *prev = NULL;

//     int cnt = 1;

//     // desired position tak jao
//     while (cnt < position)
//     {
//         prev = curr;         // previous store karo
//         curr = curr->next;   // aage badho
//         cnt++;
//     }

//     prev->next = curr->next; // link tod ke skip karo
//     delete curr;             // node delete karo
// }

// // ================= PRINT LIST =================
// void print(Node *head)
// {
//     Node *temp = head; // head se start karo

//     while (temp != NULL) // jab tak NULL na mile
//     {
//         cout << temp->data << " "; // data print karo
//         temp = temp->next;         // next node pe move karo
//     }

//     cout << endl;
// }

// // ================= MAIN FUNCTION =================
// int main()
// {
//     // manually nodes create kar rahe hain
//     Node *n1 = new Node(10);
//     Node *n2 = new Node(25);
//     Node *n3 = new Node(55);
//     Node *n4 = new Node(76);

//     // linking nodes
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;

//     Node *head = n1; // head assign
//     Node *tail = n4; // tail assign

//     print(head); // initial list

//     InsertAtHead(head, 5); // head pe insert
//     InsertAtTail(tail, 699); // tail pe insert
//     InsertAtTail(tail, 3333);

//     print(head); // updated list

//     InsertAtPosition(head, 3, 989); // position pe insert

//     print(head); // after position insert

//     deleteNode(head, 2); // delete 2nd node

//     print(head); // final list

//     return 0;
// }

// 1:00:00