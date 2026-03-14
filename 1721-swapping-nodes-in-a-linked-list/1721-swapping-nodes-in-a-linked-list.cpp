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
    ListNode* swapNodes(ListNode* head, int k) {
        int cnt=1;
        ListNode* first=head;
        ListNode* tmp=head;
        while(tmp){
            if(cnt==k){
             first=tmp;
            }
            cnt++;
            tmp=tmp->next;
        }
        ListNode* d2=first;
        ListNode* d1=head;
        while(d2->next){
            d2=d2->next;
            d1=d1->next;   
        }
        swap(first->val,d1->val);
        return head;
    }
};