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
ListNode* rev(ListNode* head){
    ListNode* prev  = nullptr;
    ListNode* curr = head;
    while(curr != NULL){
        ListNode* temp = curr->next;
        curr->next  = prev;
        prev  = curr;
        curr = temp;
    }
    return prev;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL ) return head;
        int count  = 1;
        ListNode* curr = rev(head);
        ListNode* he = curr;
        while(curr){
            if(n == 1){
                curr =curr->next;

                return rev(curr);
            }
          count++;
          if(count == n){
            curr->next  = curr->next->next;
          }
            curr = curr->next;
        }
       return rev(he);
        
    }
};