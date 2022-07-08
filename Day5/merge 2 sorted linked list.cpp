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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode();
        ListNode* h=head;
        
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val <= l2->val)
            {
                h->next=l1;
                h=h->next;
                l1=l1->next;
            }
            
            else
            {
                h->next=l2;
                l2=l2->next;
                h=h->next;
            }
        }
        
        while(l1!=NULL)
        {
            h->next=l1;
            l1=l1->next;
             h=h->next;
        }
        
        while(l2!=NULL)
        {
            h->next=l2;
            l2=l2->next;
            h=h->next;
        }
        
        return head->next;
        
        
        
        
        
            
    }
};
