1class Solution {
2public:
3    int findPeakElement(vector<int>& arr) {
4        int n= arr.size(), maxx=INT_MIN, ans=-1;
5        // if(n==1)
6        for(int i=0; i<n; i++){
7            maxx=max(maxx, arr[i]);
8            
9        }
10
11        for(int i=0; i<n; i++){
12            if(arr[i]==maxx)
13           {  ans=i;}
14        }
15
16         return ans;
17    }
18};