1class Solution {
2public:
3    int findLucky(vector<int>& arr) {
4        int freq[501] = {0}; 
5
6      
7        for (int num : arr) {
8            freq[num]++;
9        }
10
11       
12        for (int i = 500; i >= 1; --i) {
13            if (freq[i] == i) {
14                return i; 
15            }
16        }
17
18        return -1;
19    }
20};
21