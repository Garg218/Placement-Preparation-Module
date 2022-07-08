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
          ListNode* ans=new ListNode();
          ListNode* a=ans;
        int c=0;
        int s;
          while(l1!=NULL && l2!=NULL)
          {
               s=0;
               s+=(l1->val+l2->val+c);
               c=s/10;
               l1=l1->next;
               l2=l2->next;
              ListNode* n= new ListNode(s%10);
              a->next=n;
              a=a->next;
          }
        while(l1!=NULL)
        {
            s=0;
            s=s+(l1->val)+c;
            c=(s)/10;
            l1=l1->next;
            ListNode* n= new ListNode(s%10);
             a->next=n;
            a=a->next;
        }
        while(l2!=NULL)
        {
               s=0;
               s =s+c+(l2->val);
               c=s/10;
              l2=l2->next;
              ListNode* n= new ListNode(s%10);
              a->next=n;
              a=a->next;
              
              
        }
        if(c!=0)
        {
            ListNode* n= new ListNode(c%10);
              a->next=n;
              a=a->next;
        }
        
        
        return ans->next;
        
        
        
    }
};
