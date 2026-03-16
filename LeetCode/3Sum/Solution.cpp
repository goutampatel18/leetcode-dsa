1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& arr) {
4        vector<vector<int>> result;
5        sort(arr.begin(), arr.end());
6        int n=arr.size();
7
8        for(int i=0; i<n; i++)
9        {
10           if(i>0 && arr[i]==arr[i-1]) continue; 
11
12           int left=i+1, right=n-1;
13
14           while(left<right)
15           {
16                int sum = arr[i] + arr[left] + arr[right];
17
18                if( sum==0)
19                {
20                    result.push_back({arr[i], arr[left], arr[right]});
21                    left++;
22                    right--;
23
24                     while(left<right && arr[left]== arr[left-1]) 
25                {
26                    left++;
27                }
28                while(left<right && arr[right]== arr[right+1]){
29                    right--;
30                }
31
32                }
33
34               
35               else if(sum > 0){
36                right--;
37               }
38
39               else{
40                left++;
41               }
42
43           }
44
45            
46        }
47       return result;
48    }
49};