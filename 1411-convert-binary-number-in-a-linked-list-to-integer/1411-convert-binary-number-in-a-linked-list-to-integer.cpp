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
    int getDecimalValue(ListNode* head) {
        ListNode* head1=head;
        int a=0;
        int sum=0;
        while(head1!=0)
        {
            a++;
            head1=head1->next;
        }
        for(int i=a-1;i>=0;i--)
        {
            sum= sum+ head->val*pow(2,i);
            head=head->next;
        }
        return sum;
    }
};