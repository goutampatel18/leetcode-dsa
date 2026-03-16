1class Solution {
2public:
3    int missingNumber(vector<int>& arr) {
4        int n= arr.size();
5        int actual_sum=n*(n+1)/2;
6        int current_sum=0;
7       
8
9        for(int i=0; i<n; i++){
10            current_sum+=arr[i];
11        }
12return actual_sum-current_sum;
13    }
14};