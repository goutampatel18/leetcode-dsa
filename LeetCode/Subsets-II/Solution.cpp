1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4      int index=m+n-1, i=m-1, j=n-1;
5      while(i>=0 && j>=0)
6      {
7        if(nums1[i]>nums2[j])
8        {
9            nums1[index--]=nums1[i--];
10        }
11        else{
12            nums1[index--]=nums2[j--];
13        }
14      }
15      while(j>=0){
16        nums1[index--]=nums2[j--];
17      }
18    }
19};