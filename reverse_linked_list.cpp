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
    ListNode* reverseList(ListNode* head) {

        //Iterative 

        // ListNode* prev = nullptr; 
        // while(head != nullptr){
        //     ListNode* next_node = head->next;
        //     head->next = prev; 
        //     prev = head; 
        //     head = head->next; 
        // }
        // return prev; 

        //Recursive 
        return helper(head, nullptr); 
    }
    ListNode* helper(ListNode* head, ListNode* newHead){
        if(head== nullptr) return newHead; 
        ListNode* next  = head->next; 
        head->next = newHead; 
        newHead = head; 
        head = next; 
        return helper(head, newHead); 

        
    }


};


