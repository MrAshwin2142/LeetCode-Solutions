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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=0;
        ListNode* ans=head;
        ListNode* temp=head;
        while(temp!=NULL){
            i++;
            temp=temp->next;
        }
        if(i==n) return head->next;
        int k=0;
        ListNode* p;
        while(k<i-n){
            p=ans;
            k++;
            ans=ans->next;
            }
            p->next=p->next->next;
        
        
        return head;
    }
};