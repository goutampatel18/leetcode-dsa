1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode *head) {
12          if (head == NULL || head->next == NULL)
13            return false;
14
15        ListNode* slow = head;
16        ListNode* fast = head;
17
18        while (fast != NULL && fast->next != NULL) {
19            slow = slow->next;              
20            fast = fast->next->next;        
21
22            if (slow == fast) {
23                return true;
24            }
25        }
26
27        return false;
28    }
29};