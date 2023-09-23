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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* first=head;
        ListNode* second= head->next;
        if(head==NULL) return NULL;
        while(second!= NULL)
        {
            int n= __gcd(second->val,first->val);
            ListNode* gcd= new ListNode(n);
            first->next= gcd;
            gcd->next= second;
            first=second;
            second=second->next;
        }
        return head;
    }
};