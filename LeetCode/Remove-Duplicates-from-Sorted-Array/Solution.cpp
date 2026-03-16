1class Solution {
2public:
3    int removeDuplicates(vector<int>& arr) {
4        int n = arr.size();
5        int i=0;
6        for (int j=i+1; j<n; j++){
7            if(arr[j] != arr[i])
8            {
9                arr[i+1]= arr[j];
10                i++;
11            }
12        }
13        return i+1;
14    }
15};