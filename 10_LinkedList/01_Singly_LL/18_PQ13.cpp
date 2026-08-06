// Q 234 med : Palindrome Linked List 

// class Solution {
// public:
//         ListNode* reverseList(ListNode* head) {
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
//     bool isPalindrome(ListNode* head) {
//         ListNode* c = new ListNode(0);
//         // copying the lisnked list
//         ListNode* temp = head;
//         ListNode* tempC = c;
//         while(temp){
//             ListNode* node = new ListNode(temp->val);
//             tempC->next = node;
//             temp = temp->next;
//             tempC = tempC->next;
//         }
//         c = c->next;
//         c = reverseList(c);
//         ListNode* a = head;
//         ListNode* b = c;
//         while(a->next!=NULL || b->next!=NULL){
//             if(a->val!=b->val) return false;
//             a = a->next;
//             b = b->next;
//         }
//         return true;
//     }
// };


// intuition : 
// make a copy of given LL 
// Revrse the copied linked list 
// match the elements of original and copied 
// if equal then palindrome