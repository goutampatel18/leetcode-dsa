1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int n=matrix.size(), m=matrix[0].size();
5        int row=0, col=m-1;
6
7        while(row<n && col>=0){
8            if(matrix[row][col]==target){
9                return true;
10            }
11
12            else if(matrix[row][col]<target) row++;
13            else col--;
14        }
15        return false;
16    }
17};