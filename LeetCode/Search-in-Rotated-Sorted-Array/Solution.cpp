1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low = 0, high = nums.size() - 1;
5
6        while (low <= high) {
7            int mid = low + (high - low) / 2;
8
9            if (nums[mid] == target)
10                return mid;
11
12            if (nums[low] <= nums[mid]) {
13                if (nums[low] <= target && target < nums[mid])
14                    high = mid - 1;
15                else
16                    low = mid + 1;
17            } else {
18                if (nums[mid] < target && target <= nums[high])
19                    low = mid + 1;
20                else
21                    high = mid - 1;
22            }
23        }
24
25        return -1;
26    }
27};
28