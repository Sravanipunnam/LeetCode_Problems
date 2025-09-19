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
    ListNode* oddEvenList(ListNode* head) {
            if(head==nullptr || head->next==nullptr)
        {
            return head;
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* curr=dummy;
        ListNode* temp=head;
    
        while(temp!=nullptr)
        {
           ListNode *newnode=new ListNode(temp->val);
           curr->next=newnode;
           curr=newnode;
               if (temp->next != nullptr) {
                temp = temp->next->next;
            } else {
                temp = nullptr;
            }
        }
        temp=head->next;
            while(temp!=nullptr)
        {
           ListNode *newnode=new ListNode(temp->val);
           curr->next=newnode;
           curr=newnode;
          if (temp->next != nullptr) {
                temp = temp->next->next;
            } else {
                temp = nullptr;
            }
        }
        return dummy->next;
    }
};