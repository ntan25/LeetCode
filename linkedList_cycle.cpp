/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::set<ListNode*> nodeSet; 
        ListNode* temp = head; 
        while(temp != nullptr){
            if(nodeSet.find(temp) != nodeSet.end()) return true; 
            else{
                nodeSet.insert(temp); 
            }
            temp = temp->next; 
        }
        return false; 
    }
};