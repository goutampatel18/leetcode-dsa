1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int max_sum = INT_MIN, cur_sum=0;
5        for( int val: nums){
6                cur_sum = cur_sum+ val;
7                max_sum = max(max_sum, cur_sum);
8                if(cur_sum<0)
9                {
10                    cur_sum=0;
11                }
12        }
13        return max_sum;
14    }
15};