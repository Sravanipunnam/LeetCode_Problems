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
    ListNode* swapPairs(ListNode* head) {
        if(!head) return nullptr;
        if(head->next==nullptr) return head;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* curr=dummy;
        while(dummy->next && dummy->next->next){
            ListNode* first=dummy->next;
            ListNode* second=dummy->next->next;
            first->next=second->next;
            second->next=first;
            dummy->next=second;
            dummy=first;

        }
        return curr->next;
        
    }
};