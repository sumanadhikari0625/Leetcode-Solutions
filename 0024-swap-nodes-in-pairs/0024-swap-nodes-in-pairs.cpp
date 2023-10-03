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
    ListNode* swapPairs(ListNode* head) {
        ListNode *trav= head;
        ListNode *temp= NULL;
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        while(trav!=NULL && trav->next!=NULL){
            temp= trav->next;
            swap(temp->val, trav->val);
            trav=  trav->next->next;
        }
        return head;
    }
};