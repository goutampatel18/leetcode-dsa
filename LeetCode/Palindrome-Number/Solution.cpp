1class Solution {
2public:
3        int reverse(int n)
4        {
5                int d,ans=0,revnum=0;
6            while(n!=0)
7            {
8                d=n%10;
9
10                if( (ans > (INT_MAX)/10) || (ans < (INT_MIN/10)) )
11                {
12                    return false;
13                }
14
15                ans = (ans*10)+d;
16                n/=10;
17            
18            }
19            return ans;
20        }
21
22
23    bool isPalindrome(int n) {
24         
25        if(n<0){return false;}
26       int revnum = reverse(n);
27       return n == revnum;
28        
29    }
30};