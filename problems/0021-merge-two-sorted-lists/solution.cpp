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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       struct ListNode* current1=list1;
       struct ListNode* current2=list2;
       struct ListNode* head=NULL;
       struct ListNode* temp=NULL;
       while(current1!=NULL && current2!=NULL){
           if(current1->val>current2->val){
            ListNode*newnode=new ListNode(current2->val);
            current2=current2->next;
            if(head==NULL){
            head=newnode;
            temp=newnode;
           }
           else{
            temp->next=newnode;
            temp=newnode;
           }
           }
           else{
            ListNode* newnode=new ListNode(current1->val);
            current1=current1->next;
             if(head==NULL){
            head=newnode;
            temp=newnode;
           }
           else{
            temp->next=newnode;
            temp=newnode;
           }
           }

       }
       if(current1!=NULL){
        while(current1!=NULL){
            ListNode* newnode=new ListNode(current1->val);
            current1=current1->next;
           if(head==NULL){
            head=newnode;
            temp=newnode;
           }
           else{
            temp->next=newnode;
            temp=newnode;
           }
        }
       }
        if(current2!=NULL){
         while(current2!=NULL){
            ListNode* newnode=new ListNode(current2->val);
            current2=current2->next;
                      if(head==NULL){
            head=newnode;
            temp=newnode;
           }
           else{
            temp->next=newnode;
            temp=newnode;
           }
        }
       }
       return head;
    }
};