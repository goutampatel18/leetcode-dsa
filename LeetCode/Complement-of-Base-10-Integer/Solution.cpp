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
13    ListNode* middleNode(ListNode* head) {
14        ListNode* temp=head;
15        if (head == NULL || head->next == NULL) {
16        return head;
17    }
18        int count =0;
19        while (temp != NULL) {
20        count++;
21        temp = temp->next;
22    }
23     int mid = count / 2 + 1;
24    temp = head;
25
26       while (temp != NULL) {
27        mid = mid - 1;
28
29        
30        if (mid == 0){
31           
32            break;
33        }
34      
35        temp = temp->next;
36    }
37    return temp;
38         
39    }
40};