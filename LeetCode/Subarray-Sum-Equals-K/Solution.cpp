1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int count=0, presum=0;
5        unordered_map<int, int> mpp;
6        mpp[0]++;
7        for(int i=0; i<nums.size(); i++){
8            presum+=nums[i];
9            int target = presum-k;
10            if(mpp.find(target) != mpp.end()){
11                count+=mpp[target];
12            }
13
14            mpp[presum]++;
15        }
16        return count;
17    }
18};