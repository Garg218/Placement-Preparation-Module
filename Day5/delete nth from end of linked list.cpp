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
        int len=0;
        ListNode* h=head;
        while(h!=NULL)
        {
            len++;
            h=h->next;
        }
        if(len==n)
            return head->next;
        int d=len-n;
        ListNode* temp=head;
        int c=1;
        while(c!=d && temp!=NULL)
        {
            temp=temp->next;
            c++;
        }
        if(c==len)
        {
            ListNode* del=temp->next;
            temp->next=NULL;
            delete(del);
            return head;
        }
        
        ListNode* del =temp->next;
        temp->next=del->next;
        delete(del);
        
        
        return head;
        
        
    }
};
