1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int freq = 0, ans = 0, n = nums.size();
5
6        for (int i = 0; i < n; i++) {
7            if (freq == 0) {
8                ans = nums[i];
9                freq = 1; // Don’t forget to reset freq
10            } 
11            else if (ans == nums[i]) {
12                freq++;
13            } 
14            else {
15                freq--;
16            }
17        }
18
19        return ans;
20    }
21};
22