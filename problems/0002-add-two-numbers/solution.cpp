/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,digit=0;
        struct ListNode*current1;
        current1=l1;
        struct ListNode*current2;
        current2=l2;
        struct ListNode*temp=NULL;
        struct ListNode*head=NULL;
while(current1 != NULL || current2 != NULL) {
    int sum = carry;

    if(current1 != NULL) {
        sum += current1->val;
        current1 = current1->next;
    }

    if(current2 != NULL) {
        sum += current2->val;
        current2 = current2->next;
    }

    int digit = sum % 10;
    carry = sum / 10;

    ListNode* newnode = new ListNode(digit);

    if(head == NULL) {
        head = newnode;
        temp = newnode;
    } else {
        temp->next = newnode;
        temp = newnode;
    }
}
if(carry!=0){
    ListNode* newnode = new ListNode(carry);
            temp->next = newnode;
        temp = newnode;
        temp->next=NULL;
}
        return head;
    }
};