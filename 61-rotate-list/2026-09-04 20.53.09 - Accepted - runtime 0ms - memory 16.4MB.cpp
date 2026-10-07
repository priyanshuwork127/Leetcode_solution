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
        ListNode *temp=head;
        int K=k;
        int s=0;
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        while(temp!=nullptr){
            s++;
            temp=temp->next;
        }
        K=K%s;
        int tail=s-K;
        ListNode *b=head;
        int i=1;
        while(i<tail){
            i++;
            b=b->next;
        }
        ListNode *x=b;
        while(x->next!=nullptr){
            x=x->next;
        }
        x->next=head;
        // head=b;
        head=b->next;
        b->next=nullptr;
        return head;
    }
};