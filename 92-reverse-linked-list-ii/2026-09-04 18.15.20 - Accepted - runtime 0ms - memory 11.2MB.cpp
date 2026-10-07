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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right) {
            return head;
        }
        int i=1;
        ListNode *curr=head;
        while(i<left){
            curr=curr->next;
            i++;
        }
        ListNode *temp=head;
        int j=1;
        while(j<right){
            temp=temp->next;
            j++;
        }
        int k=1;
        ListNode *before=head;
        if (left > 1) {
            while (k < left - 1) {
                before = before->next;
                k++;
            }
        }
        ListNode* stop = temp->next;
        ListNode *prev=temp->next;
        while(curr!=stop){
            ListNode *next_n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next_n;
        }
        if (left == 1) {
            head = prev;
        }else{
        before->next=prev;
        }
        return head;
    }
};