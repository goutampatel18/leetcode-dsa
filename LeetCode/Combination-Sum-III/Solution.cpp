1class Solution {
2public:
3
4    void subset(int idx, vector<int>& nums, vector<vector<int>>& ans, vector<int>& ds, int k, int target){
5        if(idx>=9){
6            int sum=0;
7            for(int i=0; i<ds.size(); i++){
8                sum+=ds[i];
9            }
10            if(ds.size()==k && sum==target){
11                ans.push_back(ds);
12            }
13            return;
14        }
15
16        ds.push_back(nums[idx]);
17        subset(idx+1, nums, ans, ds, k, target);
18        ds.pop_back();
19        subset(idx+1, nums, ans, ds, k, target);
20    }
21    vector<vector<int>> combinationSum3(int k, int target) {
22        vector<int> nums = {1,2,3,4,5,6,7,8,9};
23        vector<vector<int>> ans;
24        vector<int> ds;
25        int n =9;
26        subset(0, nums, ans, ds, k, target);
27        return ans;
28    }
29};