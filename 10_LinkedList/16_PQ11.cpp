// Q Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.
// You should preserve the original relative order of the nodes in each of the two partitions. (LC86 Medium)

// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//         ListNode* lo = new ListNode(100);
//         ListNode* hi = new ListNode(100);
//         ListNode* tempLo = lo;
//         ListNode* tempHi = hi;
//         ListNode* temp = head;

//         while(temp!=NULL){
//             if(temp->val <x ){
//                 tempLo->next = temp;
//                 temp = temp->next;
//                 tempLo = tempLo->next;
//             }
//             else{// if temp value is >=x
//                 tempHi->next = temp;
//                 temp = temp->next;
//                 tempHi = tempHi->next;
//             }
//         }
//         tempLo->next = hi->next;
//         tempHi->next= NULL;
//         return lo->next;
//     }
// };