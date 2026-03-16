1class Solution {
2public:
3
4     int sumByD(vector<int>& arr, int div) {
5        int sum = 0;
6        for (int num : arr) {
7            sum += ceil((double)num / div);
8        }
9        return sum;
10    }
11
12    int smallestDivisor(vector<int>& arr, int target) {
13        int n=arr.size();
14
15       
16
17        if (arr.size() > target) return -1;
18
19        int low = 1;
20        int high = *max_element(arr.begin(), arr.end());
21
22        // Binary search r
23        while (low <= high) {
24            int mid = (low + high) / 2;
25            if (sumByD(arr, mid) <= target) {
26                high = mid - 1;  
27            } else {
28                low = mid + 1;  
29            }
30        }
31
32        return low;
33
34    }
35};