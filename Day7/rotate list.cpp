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
        if(head==NULL)
            return head;
        if(head->next==NULL)
            return head;
        ListNode* prev=NULL;
        ListNode* temp=head;
        ListNode* nhead=head;
        int c=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            c++;
        }
        if(k%c==0)
            return head;
        int n=k%c;
        temp=head;
        while(n--)
        {
            while(temp->next!=NULL)
            {
                prev=temp;
                temp=temp->next;
            }
            temp->next=nhead;
            prev->next=NULL;
            nhead=temp;
        }
        return nhead;
    }
};
