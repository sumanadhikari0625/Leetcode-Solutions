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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL|| head->next==NULL) return NULL;
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int n=count/2;
        temp=head;
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
            {
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
        return head;
    }
};