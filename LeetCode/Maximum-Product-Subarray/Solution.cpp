1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int n=nums.size(), pre=1, suff=1, maxx=INT_MIN;
5
6        for(int i=0; i<n; i++){
7            if(pre==0) pre=1;
8            if(suff==0) suff=1;
9
10            pre*=nums[i];
11            suff*=nums[n-i-1];
12            maxx=max(maxx, max(pre, suff));
13        }
14        return maxx;
15    }
16};