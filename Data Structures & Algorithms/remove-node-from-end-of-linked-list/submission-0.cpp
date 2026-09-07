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
        if(head == NULL){
            return head;
        }
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        int ans = cnt - n;
        temp = head;
        ListNode* prev = NULL;
        cnt = 0;
        
        if(ans == 0){
            return head->next;
        }

        while (cnt < ans) {
            prev = temp;
            temp = temp->next;
            cnt++;
        }

        prev->next = temp->next;
        delete temp;

        return head;
    }
};
