1class Solution {
2public:
3    int peakIndexInMountainArray(vector<int>& nums) {
4       int n = nums.size();
5       int st = 1, end = n-2,peak;
6        int mid = st+(end-st)/2;
7    while (st <= end)
8    {
9         mid = st+(end-st)/2;
10        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
11        {
12            peak=mid;
13            break;
14        }
15
16        else if (nums[mid - 1] < nums[mid] && nums[mid] < nums[mid + 1])
17        {
18            st = mid + 1;
19        }
20
21        else
22        {
23            end = mid - 1;
24        }
25    }
26
27    return peak;
28
29    }
30};