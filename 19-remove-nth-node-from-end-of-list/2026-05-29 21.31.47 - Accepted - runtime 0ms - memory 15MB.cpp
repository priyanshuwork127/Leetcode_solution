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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;

        // Step 1: count nodes
        while(temp != NULL) {
            len++;
            temp = temp->next;
        }

        // Step 2: if removing head
        if(n == len) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Step 3: go to (len - n)th node
        temp = head;
        for(int i = 1; i < len - n; i++) {
            temp = temp->next;
        }

        // Step 4: delete node
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;

        return head;
    }
};