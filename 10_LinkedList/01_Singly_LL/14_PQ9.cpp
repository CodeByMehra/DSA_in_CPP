// Merge k Sorted linked lists (LC23 Hard)


// intuition : In this problem, we are given a vector containing the heads of **k sorted linked lists**, and our task is to merge all of them into a single sorted linked list.

// To solve this, we can reuse the **merge function from the previous problem, "Merge Two Sorted Lists."**

// The main idea is simple: **pick two linked lists, merge them, and put the merged list back.**

// We start by taking the first two list heads from the vector. We remove these two heads from the vector and pass them to our `merge()` function. The function merges the two sorted linked lists and returns the head of the newly merged sorted list.

// We then push this new head to the back of the vector.

// We repeat the same process:
// **pick two lists → merge them → push the merged list back.**

// With every iteration, two lists are combined into one, so the total number of lists decreases by one.

// We continue this process until the vector contains only **one list**. At that point, that remaining list is our final merged sorted linked list, so we return its head.

// In short:

// **Take 2 lists → Merge them → Push the result back → Repeat until only 1 list remains.**


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

 * 
 * 
 */
// class Solution {
// public:
//     ListNode* merge(ListNode* a, ListNode* b) {
        
//         ListNode* c = new ListNode(100);
//         ListNode* temp = c;

//         while(a!=NULL && b!=NULL){
//             if(a->val<=b->val){
//                 temp->next  = a;
//                 a = a->next;
//                 temp = temp->next;
//             }
//             else{
//                 temp->next  = b;
//                 b = b->next;
//                 temp = temp->next;
//             }
//         }
//         if(a==NULL){
//             temp->next = b;
//         }
//         else{
//             temp->next=a;
//         }
//         return c->next;
//     }
//     ListNode* mergeKLists(vector<ListNode*>& arr) {
//         if(arr.size()==0) return NULL;
//         while(arr.size()>1){
//             ListNode* a = arr[0];
//             arr.erase(arr.begin());
//             ListNode* b = arr[0];
//             arr.erase(arr.begin());
//             ListNode* c = merge(a,b);
//             arr.push_back(c);
//         }
//         return arr[0];
//     }
// };