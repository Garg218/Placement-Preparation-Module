class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        while(head!=NULL)
        {
            ListNode* curr=head->next;
            head->next=prev;
            prev=head;
            head=curr;
        }
        return prev;
    }
};
