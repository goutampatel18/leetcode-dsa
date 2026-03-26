1class Solution {
2public:
3    bool isValid(string s) {
4         stack<char> st; 
5           for (auto it : s) {
6            if (it == '(' || it == '{' || it == '[')
7                st.push(it); 
8            else {
9                if (st.empty()) return false;  
10                char ch = st.top();
11                st.pop();
12
13                if ((it == ')' && ch == '(') ||
14                    (it == ']' && ch == '[') ||
15                    (it == '}' && ch == '{'))
16                    continue;
17                else
18                    return false;
19            }
20        }
21        return st.empty();
22    }
23};