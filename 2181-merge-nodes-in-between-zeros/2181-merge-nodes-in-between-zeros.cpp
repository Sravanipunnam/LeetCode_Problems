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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* tmp1=head;
        ListNode* tmp2=head->next;
        ListNode* dummy=new ListNode(-1);
        ListNode* prev=dummy;
        while(tmp2!=nullptr){
            int sum=0;
            while(tmp2->val!=0){
                sum+=tmp2->val;
                tmp2=tmp2->next;
            }
            tmp1=tmp2;
            tmp2=tmp1->next;
            prev->next=new ListNode(sum);
            prev=prev->next;
        }
        return dummy->next;
    }
};