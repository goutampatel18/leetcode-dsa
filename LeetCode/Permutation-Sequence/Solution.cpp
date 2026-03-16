1class Solution {
2public:
3    string getPermutation(int n, int k) {
4
5        vector<int> arr;
6        for(int i=1;i<=n;i++)
7            arr.push_back(i);
8
9        for(int i=1;i<k;i++)
10            next_permutation(arr.begin(), arr.end());
11
12        string s="";
13
14        for(int x:arr)
15            s += to_string(x);
16
17        return s;
18    }
19};