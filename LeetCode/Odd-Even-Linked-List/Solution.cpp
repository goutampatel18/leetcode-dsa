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
13    ListNode* oddEvenList(ListNode* head) {
14        if(head==NULL) return NULL;
15        if(head->next==NULL) return head;
16        vector<int> arr;
17        int count=0;
18        ListNode* temp = head;
19        while(temp!=NULL){
20            
21            arr.push_back(temp->val);
22            temp=temp->next;
23        }
24
25         ListNode* tempp=head;
26        for(int i=0; i<arr.size(); i+=2){
27            tempp->val=arr[i];
28            tempp=tempp->next;
29            
30        }
31        //  ListNode* temppp=head->next;
32          for(int i=1; i<arr.size(); i+=2){
33            tempp->val=arr[i];
34            tempp=tempp->next;
35            
36        }
37       
38return head;    }
39};