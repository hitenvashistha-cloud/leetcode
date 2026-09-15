class Solution {
public:

    ListNode* mid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* rev(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }

        return prev;
    }

    void reorderList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return;

        // Find middle
        ListNode* md = mid(head);

        // Split
        ListNode* second = md->next;
        md->next = nullptr;

        // Reverse second half
        second = rev(second);

        // Merge
        ListNode* first = head;

        while (second) {

            ListNode* nx1 = first->next;
            ListNode* nx2 = second->next;

            first->next = second;
            second->next = nx1;

            first = nx1;
            second = nx2;
        }
    }
};