1class Solution {
2public:
3
4    void fn(int idx, vector<int>& arr, vector<vector<int>>& ans,vector<int>&ds, int target ){
5        if(idx>=arr.size()){
6            if(target==0) {
7                ans.push_back(ds);
8            }
9            return;
10        }
11
12        if(arr[idx]<=target){
13            ds.push_back(arr[idx]);
14            fn(idx, arr, ans, ds, target-arr[idx]);
15            ds.pop_back();
16        }
17
18        fn(idx+1, arr, ans, ds, target);
19    }
20
21
22    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
23        vector<vector<int>> ans;
24        vector<int> ds;
25
26        fn(0, arr, ans, ds, target);
27        return ans;
28    }
29};