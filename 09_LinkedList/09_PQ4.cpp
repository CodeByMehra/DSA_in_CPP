//Q:  Given head, the head of a linked list, determine if the linked list has a cycle in it. LL141

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* temp = head;
        
//         while(temp->next!=NULL){
//             temp = temp->next;
//             return true;
//         }
//         return false;
//     }
// };