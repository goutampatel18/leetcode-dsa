1class Solution {
2public:
3    int myAtoi(string s) {
4
5        int i = 0;
6        int n = s.size();
7        long result = 0;
8        int sign = 1;
9
10        
11        while(i < n && s[i] == ' ')
12            i++;
13
14        if(i < n && (s[i] == '+' || s[i] == '-'))
15        {
16            if(s[i] == '-')
17                sign = -1;
18            i++;
19        }
20
21        while(i < n && isdigit(s[i]))
22        {
23            int digit = s[i] - '0';
24
25            // overflow
26            if(result > (INT_MAX - digit) / 10)
27            {
28                if(sign == 1) return INT_MAX;
29                else return INT_MIN;
30            }
31
32            result = result * 10 + digit;
33            i++;
34        }
35
36        return sign * result;
37    }
38};