1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        int m = nums1.size();
5        int n = nums2.size();
6        
7        vector<int> merged;
8        int i = 0, j = 0;
9
10        while(i < m && j < n) {
11            if(nums1[i] <= nums2[j]) {
12                merged.push_back(nums1[i++]);
13            } else {
14                merged.push_back(nums2[j++]);
15            }
16        }
17
18        while(i < m) merged.push_back(nums1[i++]);
19        while(j < n) merged.push_back(nums2[j++]);
20
21        int total = m + n;
22        int mid = total / 2;
23
24        if(total % 2 == 0) {
25            return (merged[mid - 1] + merged[mid]) / 2.0;
26        } else {
27            return merged[mid];
28        }
29    }
30};
31