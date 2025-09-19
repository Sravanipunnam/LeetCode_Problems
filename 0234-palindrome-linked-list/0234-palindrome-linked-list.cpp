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
ListNode* reversed(ListNode* head)
{
    ListNode* prev=nullptr;
    ListNode* curr=head;
    while(curr!=nullptr)
    {
        ListNode*temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;

    }
    return prev;

}
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        ListNode* first=head;
        ListNode* newhead=reversed(slow->next);
        ListNode* second=newhead;
        while(second!=nullptr)
        {
            if(first->val!=second->val)
            {
                reversed(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reversed(newhead);
        return true;
        
    }
};