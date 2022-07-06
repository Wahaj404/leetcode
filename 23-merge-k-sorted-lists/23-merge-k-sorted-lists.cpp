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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto n = lists.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        auto push = [&](int i) {
            if (lists[i] != nullptr) {
                pq.emplace(lists[i]->val, i);
                lists[i] = lists[i]->next;
            }
        };
        auto pop = [&]() {
            auto [x, i] = pq.top();
            pq.pop();
            push(i);
            return x;
        };
        for (int i = 0; i < n; ++i) {
            push(i);
        }
        if (pq.empty()) {
            return nullptr;
        }
        auto head = new ListNode(pop()), tail = head;
        while (!pq.empty()) {
            tail = tail->next = new ListNode(pop());
        }
        return head;
    }
};