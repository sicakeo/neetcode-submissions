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
        int length = 0;
        
        ListNode* curr = head;
        while(curr) {
            length++;
            curr = curr->next;
        }

        //Delete node
        int i = 0;
        ListNode* prev = NULL;
        curr = head;
        while(curr && i != length-n) {
            prev = curr;
            curr = curr->next;
            i++;
        }
        
        if(prev == NULL) 
            head = head->next;
        else
            prev->next = curr->next;
        delete curr;
        return head;
    }
};
