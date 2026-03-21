1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        int n = s.size();
5        int l = 0, maxlen = 0, maxFreq = 0;
6        vector<int> freq(26, 0);
7
8        for (int r = 0; r < n; r++) {
9
10            freq[s[r] - 'A']++;
11            maxFreq = max(maxFreq, freq[s[r] - 'A']);
12
13            if ((r - l + 1) - maxFreq > k) {
14                freq[s[l] - 'A']--;
15                l++;
16            }
17
18            maxlen = max(maxlen, r - l + 1);
19        }
20
21        return maxlen;
22    }
23};