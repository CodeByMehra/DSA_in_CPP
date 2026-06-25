// // Q: Detect the starting node of the cycle in a linked list.  LL142
// //    If there is no cycle, return NULL. 
// //    Use Floyd’s Cycle Detection Algorithm (Tortoise and Hare).

// class Solution {
// public:
    // ListNode* detectCycle(ListNode *head) {
    //     ListNode* slow = head;
    //     ListNode* fast = head;
    //     bool flag = false; // Initially, assume there is no cycle

    //     // Step 1: Detect if a cycle exists using slow and fast pointers
    //     while (fast != NULL && fast->next != NULL) {
    //         slow = slow->next;
    //         fast = fast->next->next;

    //         if (slow == fast) {
    //             flag = true; // Cycle detected
    //             break;
    //         }
    //     }

    //     // Step 2: If no cycle, return NULL
    //     if (flag == false) 
    //         return NULL;
    //     else {
    //         // Step 3: Find the entry point of the cycle
    //         ListNode* temp = head;
    //         while (temp != slow) {
    //             slow = slow->next;
    //             temp = temp->next;
    //         }
    //         return slow; // Return the starting node of the cycle
    //     }
    // }
// };

//<-------------------------------------------------------------------------------------------------->
// Logic Explanation in Comments:

// Cycle Detection (Floyd’s Tortoise and Hare Algorithm):

// We use two pointers: slow (moves one step at a time) and fast (moves two steps at a time).

// If a cycle exists, at some point, slow and fast will meet inside the cycle.

// No Cycle Case:

// If fast or fast->next becomes NULL, the list does not have a cycle → return NULL.

// Finding the Starting Node of the Cycle:

// After detecting the cycle (when slow == fast), initialize another pointer temp to the head of the list.

// Move temp and slow one step at a time until they meet.

// The node where they meet is the entry point of the cycle.