1class Solution {
2public:
3    int searchInsert(vector<int>& arr, int target) {
4        int n=arr.size(), st=0, end=n-1, ans=n;
5        while(st<=end)
6        {
7           int mid=end-(end-st)/2;
8            if (arr[mid] >= target) {
9                // Potential answer found, try to go left
10                ans = mid;
11                end = mid - 1;
12            } else {
13                // Go right
14                st = mid + 1;
15            }
16        }
17        return ans;
18    }
19};