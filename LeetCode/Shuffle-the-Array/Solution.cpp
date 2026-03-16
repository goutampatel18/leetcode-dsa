1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        vector<int> ans;
5        int i=0, j=n;
6        
7        while(i<n && j<2*n){
8            ans.push_back(nums[i]);
9            ans.push_back(nums[j]);
10            i++; j++;
11
12        }
13        return ans;
14    }
15};