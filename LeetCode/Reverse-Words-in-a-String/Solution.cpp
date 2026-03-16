1class Solution {
2public:
3    string reverseWords(string s) {
4
5        stringstream ss(s);
6        vector<string> words;
7        string word;
8
9        while(ss >> word)
10        {
11            words.push_back(word);
12        }
13
14        reverse(words.begin(), words.end());
15
16        string result="";
17
18        for(int i=0;i<words.size();i++)
19        {
20            result += words[i];
21
22            if(i != words.size()-1)
23                result += " ";
24        }
25
26        return result;
27    }
28};