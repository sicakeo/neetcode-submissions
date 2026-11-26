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
        if(!head->next || !head)
            return nullptr;
        
        ListNode* first = head;
        int i = 0;
        while(first && i!=n) {
            i++;
            first = first->next;
        }

        ListNode* second = head;
        ListNode* prev = NULL;
        while(first) {
            prev = second;
            second = second->next;
            first = first->next;
        }
        
        if(prev == NULL) 
            head = head->next;
        else
            prev->next = second->next;
        delete second;
        return head;
    }
};
