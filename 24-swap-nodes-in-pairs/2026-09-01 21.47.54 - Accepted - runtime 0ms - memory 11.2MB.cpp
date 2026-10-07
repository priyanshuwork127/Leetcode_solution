class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* first = head;
        ListNode* second = head->next;

        head = second;

        // First pair
        first->next = second->next;
        second->next = first;

        ListNode* prev = first;

        while (prev->next != nullptr &&
               prev->next->next != nullptr) {

            first = prev->next;
            second = first->next;

            // Swap
            first->next = second->next;
            second->next = first;

            // Connect previous pair
            prev->next = second;

            // Move to next pair
            prev = first;
        }

        return head;
    }
};