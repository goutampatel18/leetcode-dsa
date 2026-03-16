1class Solution {
2public:
3    int countPrimes(int n) {
4        vector<bool> isprime (n+1,true);
5        int count=0;
6        for(int i=2;i<n;i++){
7            if(isprime[i]){
8                count++;
9                for(int j=i*2;j<n;j+=i){
10                    isprime[j]=false;
11                }
12            }
13        }
14        return count;
15    }
16};