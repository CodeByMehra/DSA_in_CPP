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