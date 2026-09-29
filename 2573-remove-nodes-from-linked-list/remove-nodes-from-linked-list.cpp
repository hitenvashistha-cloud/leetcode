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
    ListNode* removeNodes(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        vector<int> arr;

        while(temp){
           arr.push_back(temp->val);
           temp = temp->next;
        }
   
        vector<int> st;
         for(int x : arr){
            while(!st.empty() && st.back() < x){
                st.pop_back();
            }
            st.push_back(x);        
         }

         ListNode* newHead = nullptr;
         ListNode* curr = nullptr;

         for(int x : st){
            ListNode* node = new ListNode(x);

            if(newHead == nullptr){
                newHead = node;
                curr = node;
            }else{
                curr->next = node;
                curr = node;
            }
         }
         return newHead;
   }
};