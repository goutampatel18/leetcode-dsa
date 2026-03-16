1class Solution {
2public:
3    int hammingWeight(int n) {
4
5        int d,sum=0;
6         while (n != 0)
7    {
8        d = n % 2;
9        sum += d;
10        n /= 2;
11    }
12        return sum;
13    }
14};