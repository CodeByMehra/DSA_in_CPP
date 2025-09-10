// // 61 - Rotate List 
// // Definition of a Solution class
// class Solution {
// public:
//     // Function to rotate the linked list to the right by k places
//     ListNode* rotateRight(ListNode* head, int k) {
//         // Edge case: If the list is empty or has only one node, no rotation needed
//         if (head == NULL || head->next == NULL) 
//             return head;

//         // Step 1: Find the length of the linked list
//         int n = 0;  // To store the length of the list
//         ListNode* temp = head;
//         ListNode* tail = NULL;
        
//         // Traverse the list to calculate its length and get the tail node
//         while (temp != NULL) {
//             if (temp->next == NULL)
//                 tail = temp;  // The last node becomes the tail
//             temp = temp->next;
//             n++;
//         }

//         // Step 2: Reduce k to avoid unnecessary full rotations
//         k = k % n;
//         if (k == 0) 
//             return head;  // No rotation needed if k is 0 after modulo

//         // Step 3: Move temp to (n-k)th node
//         temp = head;
//         for (int i = 1; i < n - k; i++) {
//             temp = temp->next;
//         }

//         // Step 4: Perform the rotation
//         // Connect tail to head to make it circular temporarily
//         tail->next = head;

//         // New head will be the node after temp
//         head = temp->next;

//         // Break the link to form the new end of the list
//         temp->next = NULL;

//         // Return the new head of the rotated list
//         return head;
//     }
// };
