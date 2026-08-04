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


// Intuition:
// This problem can be solved by partitioning the linked list into two separate lists and carefully manipulating the next pointers.

// The main idea is to create:

// A low list, containing all nodes whose values are less than x.
// A high list, containing all nodes whose values are greater than or equal to x.

// To make building these two lists easier, we create two dummy nodes, low and high. Their actual values do not matter because they are only used as starting points.

// We then maintain two pointers:

// tempLow, initially pointing to low, keeps track of the end of the low list.
// tempHigh, initially pointing to high, keeps track of the end of the high list.

// We also use a pointer temp, initially pointing to head, to traverse the original linked list.

// Traversing the List

// While temp is not NULL, we check the value of the current node.

// If temp->val < x, the current node belongs to the low list:

// tempLow->next = temp

// Then we move tempLow forward:

// tempLow = tempLow->next

// Otherwise, if temp->val >= x, the current node belongs to the high list:

// tempHigh->next = temp

// Then we move tempHigh forward:

// tempHigh = tempHigh->next

// After processing the current node, we move temp to the next node and continue until the entire original list has been traversed.

// Connecting the Two Lists

// Once all nodes have been partitioned, we connect the end of the low list to the beginning of the high list:

// tempLow->next = high->next

// We must also terminate the high list:

// tempHigh->next = NULL

// Finally, since low is only a dummy node, the head of our resulting linked list is:

// low->next

// Core Intuition

// Think of it as creating two chains while traversing the original list:
// values < x → values >= x

// We do not create copies of the original nodes. Instead, we reuse the same nodes and rearrange their next pointers.
// For example, if:

// 1 → 4 → 3 → 2 → 5 → 2, with x = 3

// we build:
// low: 1 → 2 → 2

// high: 4 → 3 → 5
// and finally connect them:

// 1 → 2 → 2 → 4 → 3 → 5
// This preserves the relative order of nodes within both partitions while giving us the required partitioned linked list.