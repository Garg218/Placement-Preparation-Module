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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        if(head==NULL)
            return head;
        vector<ListNode*> v1,v2;
        while(temp!=NULL)
        {
            if(temp->val<x)
                v1.push_back(temp);
            else
                v2.push_back(temp);
            
            temp=temp->next;
        }
        
        ListNode* ans=new ListNode(0);
        
        ListNode* a=ans;
        
        
        for(auto it:v1)
        {
            a->next=it;
            a=a->next;
        }
        
        for(auto it:v2)
        {
            a->next=it;
            a=a->next;
        }
        a->next=NULL;
        
        return ans->next;
    }
};
