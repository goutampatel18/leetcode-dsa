1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& arr) {
4        int count=0, maxi=0, n=arr.size();
5
6        for(int i=0; i<n; i++){
7            if(arr[i]==1){
8                count++;
9            }
10
11            else{
12                count=0;
13            }
14
15            maxi=max(count,maxi);
16        }
17
18        return maxi;
19    }
20};