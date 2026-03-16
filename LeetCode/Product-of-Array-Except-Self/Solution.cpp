1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n= nums.size(); 
5        vector<int> prefix(n,1); 
6        vector<int> suffix(n,1);
7       vector<int> ans(n,1);
8        
9         
10        for(int i=1;i<n; i++){
11            prefix[i]= prefix[i-1] * nums[i-1];
12           
13        }
14        
15        for(int i=n-2; i>=0; i--){
16            suffix[i]= suffix[i+1] * nums[i+1];
17          
18        }
19        
20        for(int i=0; i<n; i++){
21            ans[i] = prefix[i]* suffix[i];
22           
23        }
24        
25        return ans;
26
27    }
28};