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
    // Node *node1 = new Node(10);
    // Node *node2 = new Node(20);
    // Node *node3 = new Node(30);
    // Node *node4 = new Node(40);
    // Node *node5 = new Node(50);
    // Node *node6 = new Node(60);
    // node1->next = node2;
    // node2->next = node3;
    // node3->next = node4;
    // node4->next = node5;
    // node5->next = node6;
    // node6->next = NULL;
    // Node *head = node1;
    // Node *temp = head;
//     int counter = 0, n = 5, tracker = 0;

//     while (temp != NULL)
//     {
//         counter++;
//         temp = temp->next;
//     }
//     temp = head;
//     cout << endl;
//     while (tracker != counter - n)
//     {
//         tracker++;
//         temp = temp->next;

//         if (tracker == counter - n)
//         {
//             cout << temp->data << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[4] = {7, 3, 9, 5};
//     int nums = 0;
//     for (int i = 0; i < 4; i++)
//     {

//         nums = nums * 10 + arr[i];
//     }
//     cout << nums << " ";
//     nums = nums + 1;
//     int lrr[5];
//     for (int j = 0; j < 4; j++)
//     {
//         int k = 4;
//         while (k >= 0)
//         {
//             nums = nums % 10;
//             lrr[k] = nums;
//             k--;
//         }
//     }
//     for (int l = 0; l < 4; l++)
//     {
//         cout << arr[l] << " ";
//     }
//     return 0;
// }

