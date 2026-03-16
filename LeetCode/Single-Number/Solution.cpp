1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans = 0, x = nums.size();
5        for(int i=0; i<x;i++)
6        {
7            ans = ans ^ nums[i];
8        }
9        return ans;
10    }
11    
12};