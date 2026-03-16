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
13    ListNode* deleteMiddle(ListNode* head) {
14         ListNode* slow = head;
15         ListNode* fast = head;
16          ListNode* prev=NULL;
17              if(head->next==NULL) return NULL;
18          while(fast!=NULL && fast->next!= NULL){
19            prev=slow;
20            slow=slow->next;
21            fast= fast->next->next;
22          }
23          prev->next=prev->next->next;
24          delete slow;
25          return head;
26
27    }
28};