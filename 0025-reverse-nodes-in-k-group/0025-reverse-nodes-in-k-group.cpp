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
ListNode* findk(ListNode* temp,int k)
{
    k-=1;
    while(temp!=nullptr && k>0)
    {
        k--;
         temp=temp->next;
         
    }
    return temp;
}
ListNode* reversed(ListNode* temp)
{
    ListNode* prev=nullptr;
    ListNode* curr=temp;
    while(curr!=nullptr)
    {
        ListNode* nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
      ListNode* temp=head;
      ListNode* kNode;
      ListNode* prev=nullptr;
      while(temp!=nullptr)
      {
           kNode=findk(temp,k);
           if(kNode==nullptr)
           {
            if(prev)  {prev->next=temp;}
            break;
           }
           ListNode* nextnode=kNode->next;
           kNode->next=nullptr;
           ListNode* newhead=reversed(temp);
           if(temp==head){
            head=newhead;
           }
           else
           {
               prev->next=newhead;
           }
           prev=temp;
           temp=nextnode;
      }
      return head;
    }
};