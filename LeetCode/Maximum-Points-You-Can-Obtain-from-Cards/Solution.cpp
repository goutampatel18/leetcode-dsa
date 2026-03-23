1class Solution {
2public:
3    int maxScore(vector<int>& nums, int k) {
4        int n = nums.size();
5        int sum = 0;
6
7        int total = 0;
8        for (int i = 0; i < k; ++i) {
9            sum += nums[i];
10        }
11
12        int maxsum = sum;
13
14        for (int i = 0; i < k; ++i) {
15            sum -= nums[k - 1 - i];
16
17            sum += nums[n - 1 - i];
18
19            maxsum = max(maxsum, sum);
20        }
21
22        return maxsum;
23    }
24};