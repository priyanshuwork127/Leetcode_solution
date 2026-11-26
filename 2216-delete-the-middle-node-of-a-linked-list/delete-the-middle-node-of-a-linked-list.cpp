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
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        ListNode* temp=head;
        int c=0;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        int mid=c/2;
        ListNode* temp1=head;
        int k=0;
        while(k<mid-1){
            k++;
            temp1=temp1->next;
        }
        temp1->next=temp1->next->next;
        return head;
    }
};