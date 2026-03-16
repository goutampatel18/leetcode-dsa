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
13    bool isPalindrome(ListNode* head) {
14        vector<int> arr;
15        ListNode* temp=head;
16        
17        while(temp != NULL){
18            arr.push_back(temp->val);
19            temp = temp->next;
20        }
21        int n= arr.size();
22        int st=0, end=n-1;
23        while(st<end){
24            if(arr[st]==arr[end]){
25                st++;
26                end--;
27            }
28            else{
29                return false;
30            }
31        }
32        return true;
33    }
34};