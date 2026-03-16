1class Solution {
2public:
3
4    void fn(int idx, string digits, string &ds, 
5            vector<string> &ans, vector<string> &map)
6    {
7        if(idx == digits.size())
8        {
9            ans.push_back(ds);
10            return;
11        }
12
13        string letters = map[digits[idx] - '0'];
14
15        for(char c : letters)
16        {
17            ds.push_back(c);
18
19            fn(idx + 1, digits, ds, ans, map);
20
21            ds.pop_back();
22        }
23    }
24
25    vector<string> letterCombinations(string digits) {
26
27        if(digits.size() == 0) return {};
28
29        vector<string> map =
30        {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
31
32        vector<string> ans;
33        string ds;
34
35        fn(0, digits, ds, ans, map);
36
37        return ans;
38    }
39};