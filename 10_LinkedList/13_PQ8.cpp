// Merge two sorted linked lists (LC 21)

// Approach 1: Brute force
// The first approach will be by using an extra space where we maintaining three pointers, one in the list one, and second in the list two, and third in the new created list where we have created it by creating a temporary node, and we will connect the next nodes respectively by comparing the nodes of list one and list two by using the pointers. And at the end, we will return the next node to the temporary node, which will act as the head of the new list.

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//         // SC - O(m+n)
//         ListNode* tempA = a;
//         ListNode* tempB = b;
//         ListNode* c = new ListNode(100);
//         ListNode* tempC = c;

//         while(tempA!=NULL && tempB!=NULL){
//             if(tempA->val<=tempB->val){
//                 ListNode* t = new ListNode(tempA->val);
//                 tempC->next  = t;
//                 tempC = t;
//                 tempA = tempA->next;
//             }
//             else{
//                 ListNode* t = new ListNode(tempB->val);
//                 tempC->next  = t;
//                 tempC = t;
//                 tempB = tempB->next;
//             }
//         }
//         if(tempA==NULL){
//             tempC->next = tempB;
//         }
//         else{
//             tempC->next=tempA;
//         }
//         return c->next;
//     }
// };