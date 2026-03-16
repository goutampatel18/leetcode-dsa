1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        int n=nums.size();
5        vector <int> ans(n);
6        int pos=0, neg=1;
7        for(int i=0; i<n; i++){
8            if(nums[i]>=0){
9                ans[pos]=nums[i];
10                pos+=2;
11            }
12
13            else{
14                ans[neg]=nums[i];
15                neg+=2;
16            }
17        }
18        return ans;
19    }
20};