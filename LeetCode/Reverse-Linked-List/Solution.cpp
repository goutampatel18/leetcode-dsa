1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14          ListNode* prev = NULL;
15    ListNode* current = head;
16
17    while (current != NULL) {
18
19        ListNode* nextNode = current->next;  // store next
20        current->next = prev;     // reverse link
21        prev = current;                  // move prev
22        current = nextNode;                  // move current
23    }
24return prev;
25    }
26};