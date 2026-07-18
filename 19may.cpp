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
//     Node *temp = head;
//     int count=0;
//     while (temp != NULL)
//     {
//         count++;
//         temp=temp->next;
//     }
//     temp=head;
//     int pos=1;
//     if(count%2==0){
        
//         while (temp != NULL)
//     {
      
        
//         if(pos==count/2){
//             cout<<temp->data<<" "<<temp->next->data;
//             break;
//         }
//         pos++;
//         temp=temp->next;
//     }
//     }
//     else
//     {
//         while(temp != NULL)
//         {
//             if(pos == count/2 + 1)
//             {
//                 cout << temp->data;
//                 break;
//             }

//             pos++;
//             temp = temp->next;
//         }
//     }

//     return 0;
// }