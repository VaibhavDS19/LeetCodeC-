/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *first=head, *second=head;
        if(head!=nullptr && head->next!=nullptr) second=head->next;
        while(second!=nullptr && second->next!=nullptr && first!=nullptr)
        {
            if(first==second) return true;
            first=first->next;
            second=second->next->next;
        }
        return false;
    }
};