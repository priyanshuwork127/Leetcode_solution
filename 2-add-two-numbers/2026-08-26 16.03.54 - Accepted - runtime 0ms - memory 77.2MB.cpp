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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* ans=new ListNode(0);
        ListNode* temp=ans;
        int carry=0;
        while(temp1!=NULL && temp2!=NULL){
            int sum=temp1->val+temp2->val+carry;
            int digit=sum%10;
            carry=sum/10;
            temp->next=new ListNode(digit);
            temp=temp->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL){
            int sum1=temp1->val+carry;
            carry=sum1/10;
            temp->next=new ListNode(sum1%10);
            temp=temp->next;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            int sum2=temp2->val+carry;
            carry=sum2/10;
            temp->next=new ListNode(sum2%10);
            temp=temp->next;
            temp2=temp2->next;
        }
        if(carry==0){
            return ans->next;
        }
        else{
            temp->next=new ListNode(1);
            temp=temp->next;
        }
        return ans->next;
    }
};