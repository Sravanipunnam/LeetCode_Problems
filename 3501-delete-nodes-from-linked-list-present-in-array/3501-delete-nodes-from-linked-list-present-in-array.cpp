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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==nullptr) return nullptr;
        ListNode* temp=head;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* prev=dummy;
 
        sort(nums.begin(),nums.end());
        while(temp!=nullptr)
        {
            if(binary_search(nums.begin(),nums.end(),temp->val))
            {
               prev->next=temp->next;
            }
            else{
               prev=temp;
            }
            temp=temp->next;

        }
         head=dummy->next;
         delete dummy;
         return head;  
    }
};