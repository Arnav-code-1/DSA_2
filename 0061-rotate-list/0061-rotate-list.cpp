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
        if (!head || k == 0) {
            return head;  // No rotation needed
        }
        ListNode* temp=head;
        int cnt=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            cnt++;
        }
        k=k%cnt;

        if(k==0)
        return head;

        int x=cnt-k;
        int t=0;
        temp->next=head;
        while(t<x)
        {
            temp=temp->next;
            t++;
        }
        ListNode* newhead=temp->next;
        temp->next=NULL;
        return newhead;
    }
};