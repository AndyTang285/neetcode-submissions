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
#include <unordered_set>

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        std::unordered_set<ListNode*> seen;
        seen.insert(head);
        ListNode* curr = head->next; 
        
        while (curr != nullptr) {
            if (seen.count(curr) > 0) return true; 
            seen.insert(curr); 
            curr = curr->next;  
        }

        return false; 
    }
};
