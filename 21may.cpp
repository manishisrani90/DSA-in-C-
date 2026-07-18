#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
 while(fast!=NULL && fast->next!=NULL){
    ListNode* slow=head->next;
    ListNode* fast=head->next->next;
    if(slow==fast){
        cout<<" yes";
    return true;
    }
    }
    cout<<"no";
    return false;}
};
int main() {
     
    return 0;
}