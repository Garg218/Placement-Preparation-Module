class Solution {
public:
    void deleteNode(ListNode* node) {
        int value=node->next->val;
        node->val=value;
        node->next=node->next->next;
    }
};
