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
    ListNode* mergeTwoLists(ListNode* p, ListNode* q) {
        auto r = new ListNode(), t = r;
        while (p != nullptr && q != nullptr) {
            if (p->val < q->val) {
                r = r->next = new ListNode(p->val);
                p = p->next;
            } else {
                r = r->next = new ListNode(q->val);
                q = q->next;                
            }
        }
        while (p != nullptr) {
            r = r->next = new ListNode(p->val);
            p = p->next;
        }
        while (q != nullptr) {
            r = r->next = new ListNode(q->val);
            q = q->next;
        }
        return t->next;
    }
};