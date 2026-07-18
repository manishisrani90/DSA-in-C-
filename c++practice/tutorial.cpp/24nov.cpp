#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *next;
    node() {
        data = 0;
        next = NULL;
    }
    node(int x) {
        data = x;
        next = NULL;
    }
};

class LinkedList {
public:
    node *head;
    LinkedList() {
        head = NULL;
    }
    void insert_at_start(int x) {
        node *temp = new node(x);
        temp->next = head;
        head = temp;
    }
    void insert_at_end(int x) {
        node *temp = new node(x);
        if (head == NULL) {
            head = temp;
            return;
        }
        node *curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = temp;
    }
void delete_at_start() {
        if (head == NULL) return;
        node *temp = head;
        head = head->next;
        delete temp;
    }
    
    void delete_at_end() {
        if (head == NULL) return;
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        node *curr = head;
        while (curr->next->next != NULL) {
            curr = curr->next;
        }
        delete curr->next;
        curr->next = NULL;
    }
    
    void print_list() {
        node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "END" << endl;
    }
};
int main() {
    LinkedList ll;
    for (int i = 1; i <= 5; i++) {
        ll.insert_at_start(i * 10);
    }
    for (int i = 6; i <= 8; i++) {
        ll.insert_at_end(i * 10);
    }
    for(int i=0;i<3;i++){
        ll.delete_at_start();
    }
    ll.print_list();
    return 0;
}
