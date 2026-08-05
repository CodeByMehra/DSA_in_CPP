// Q: 206. Reverse Linked List

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* Prev = NULL;
//         ListNode* Current = head;
//         ListNode* Next = NULL;

//         while(Current){
//             Next = Current->next;
//             Current->next = Prev;
//             Prev = Current;
//             Current = Next;
//         }
//         return Prev;
//     }
// };

// Recursive Solution:
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* newHead = reverseList(head->next);
//         head->next->next = head;
//         head->next = NULL;
//         return newHead;
//     }
// };