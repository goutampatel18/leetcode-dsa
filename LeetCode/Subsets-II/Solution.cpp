1class Solution {
2public:
3
4    void subset(int idx, vector<int>& nums, vector<vector<int>>& ans, vector<int>& ds, int n){
5        ans.push_back(ds);
6
7        for(int i=idx; i<nums.size(); i++){
8            if(i>idx && nums[i]==nums[i-1]) continue;
9
10            ds.push_back(nums[i]);
11            subset(i+1, nums, ans, ds, n);
12            ds.pop_back();
13        }
14    }
15    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
16        vector<vector<int>> ans;
17        int n=nums.size();
18        vector<int> ds;
19        sort(nums.begin(), nums.end());
20        subset(0, nums, ans, ds, n);
21        return ans;
22    }
23};