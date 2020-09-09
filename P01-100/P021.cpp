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
        ListNode *x=new ListNode(0), *x2=x;
        int data;
        while(l1!=nullptr && l2!=nullptr)
        {
            if( (l1->val) < (l2->val) )
            {
                data = l1->val;
                l1=l1->next;
            }
            else
            {
                data = l2->val;
                l2=l2->next;
            }
            ListNode *n = new ListNode(data);
            x->next=n;
            x=n;
        }
        while(l1!=nullptr)
        {
            ListNode *n = new ListNode(l1->val);
            x->next=n;
            x=n;
            l1=l1->next;
        }
        while(l2!=nullptr)
        {
            ListNode *n = new ListNode(l2->val);
            x->next=n;
            x=n;
            l2=l2->next;
        }
        return x2->next;
    }
};
