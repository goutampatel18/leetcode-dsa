1class Solution {
2public:
3
4    void fn(int idx, vector<int>& nums, vector<vector<int>>& ans, int n){
5        if(idx==n){
6            ans.push_back(nums);
7            return;
8        }
9
10        for(int i=idx; i<n; i++){
11            swap(nums[idx], nums[i] );
12            fn(idx+1, nums, ans, n);
13            swap(nums[idx], nums[i]);
14        }
15    }
16    vector<vector<int>> permute(vector<int>& nums) {
17        vector<vector<int>> ans;
18        int n = nums.size();
19        fn(0, nums, ans, n);
20       return ans;
21
22    }
23};