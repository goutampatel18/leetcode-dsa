1class Solution {
2public:
3       
4    bool IAN(char ch){
5        if( (ch>='0' && ch<='9') || (tolower(ch) >='a' && tolower(ch)<='z') )
6            {
7                 return true;
8            }
9            return false;
10    }
11
12
13    bool isPalindrome(string s) {
14        int st=0, end= s.length()-1;
15        while(st<end)
16        {
17            if(!IAN(s[st])) 
18            {
19                st++; continue;
20            }
21              if(!IAN(s[end])) 
22            {
23                end--; continue;
24            }
25
26          
27
28            if(tolower(s[st]) != tolower(s[end])){
29                return false;
30            }
31
32            st++; end--;
33
34        }
35        return true;
36        
37    }
38};