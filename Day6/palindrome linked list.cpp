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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
         
       ListNode* prev=NULL;
        ListNode* rev=slow->next;
        while(rev!=NULL)
        {
            ListNode* curr=rev->next;
            rev->next=prev;
            prev=rev;
            rev=curr;
        }
        slow->next=prev;
        
        
        ListNode* s =slow->next;
        while(s!=NULL)
        {
            if(s->val==head->val)
            {
                s=s->next;
                head=head->next;
                
            }
            else
                return false;
        }
        return true;
    }
};
