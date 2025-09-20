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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create dummy to handle edge cases (like deleting head)
        ListNode* dummy = new ListNode(0, head);
        ListNode* first = dummy;
        ListNode* second = dummy;

        // Move `second` ahead by n+1 steps
        for (int i = 0; i <= n; i++) {
            second = second->next;
        }

        // Move both pointers until `second` reaches the end
        while (second != nullptr) {
            first = first->next;
            second = second->next;
        }

        // `first->next` is the node to delete
        ListNode* toDelete = first->next;
        first->next = first->next->next;
        delete toDelete;

        // Return updated head
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
