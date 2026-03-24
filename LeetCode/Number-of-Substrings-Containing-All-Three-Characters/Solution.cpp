1class Solution {
2public:
3    int numberOfSubstrings(string s) {
4        int n = s.size(), l=0, r=0, result=0, len=0;
5        vector<int> freq(3, 0);
6
7        while(r<n){
8            freq[s[r]-'a']++;
9            while(freq[0]>0 && freq[1]>0 && freq[2]>0){
10                len=n-r;
11                result+=len;
12                freq[s[l]-'a']--;
13                l++;
14            }
15            r++;
16        }
17        return result;
18    }
19};