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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp1=head;
         if (!head || !head->next || k == 0) return head;
        int size=0;
        while(temp1!=nullptr){
             size++;
             temp1=temp1->next;
        }
     k = k % size;
      if (k == 0) return head;   // 🔥 must come BEFORE size-k
      k = size - k;
        
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr){
            if(count==k-1){
                break;
            }
            count++;
            temp=temp->next;
        }
        ListNode* start=temp->next;
        ListNode* ans=start;
        temp->next=nullptr;
        while(start->next!=nullptr){
            start=start->next;
        }
        start->next=head;
        return ans;
        

    }
};