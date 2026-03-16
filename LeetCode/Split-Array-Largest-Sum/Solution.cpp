1class Solution {
2public:
3
4    bool canSplit(vector<int>& arr, int k, int maxSum) {
5        int count = 1;        // at least 1 subarray
6        long long current = 0;
7
8        for (int num : arr) {
9            if (current + num > maxSum) {
10                count++;
11                current = num;
12            } else {
13                current += num;
14            }
15        }
16
17        return count <= k;
18    }
19
20    int splitArray(vector<int>& arr, int k) {
21        int n = arr.size();
22        
23        long long sum = 0;
24        for (int i = 0; i < n; i++) {
25            sum += arr[i];
26        }
27
28        int low = *max_element(arr.begin(), arr.end());  // FIXED
29        int high = sum;
30
31        while (low <= high) {
32            int mid = low + (high - low) / 2;  // FIXED
33
34            if (canSplit(arr, k, mid)) {
35                high = mid - 1;   // try smaller
36            } else {
37                low = mid + 1;    // increase
38            }
39        }
40
41        return low;
42    }
43};
44