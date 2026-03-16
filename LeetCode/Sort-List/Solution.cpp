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
13    ListNode* sortList(ListNode* head) {
14        vector<int> arr;
15        ListNode* temp=head;
16        while(temp!=NULL){
17            arr.push_back(temp->val);
18            temp=temp->next;
19        }
20        sort(arr.begin(), arr.end());
21        int n=arr.size();
22        int st=0;
23        ListNode* tempp=head;
24        while(tempp!=NULL){
25            tempp->val=arr[st];
26            st++;
27            tempp=tempp->next;
28        }
29        // for(int i=0; i<n; i++){
30        //     tempp->val=arr[i];
31        //     tempp=tempp->next;
32        // }
33        return head;
34    }
35};