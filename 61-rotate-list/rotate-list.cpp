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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL) return head;
        ListNode* temp=head;
        int n=1;
        while(temp->next!=NULL){
            temp=temp->next;
            n++;
        }
        temp->next=head;
        k=k%n;
        int stopptr=n-k;
        ListNode* newtail=head;
        for(int i=1;i<stopptr;i++){
            newtail=newtail->next;
        }
        ListNode* newhead=newtail->next;
        newtail->next=NULL;
        return newhead;
    }
};