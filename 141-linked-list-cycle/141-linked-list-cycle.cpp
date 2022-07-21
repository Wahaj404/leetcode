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
        unordered_set<ListNode*> hack;
        while (head != nullptr) {
            if (hack.count(head)) return true;
            hack.insert(head);
            head = head->next;
        }
        return false;
    }
};