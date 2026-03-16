1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4        vector<vector<int>> triangle;
5         for (int i = 0; i < numRows; i++) {
6            // Create a row with size (i+1) and initialize all elements to 1
7            vector<int> row(i + 1, 1);
8
9            // Fill elements from index 1 to i-1 (middle values)
10            for (int j = 1; j < i; j++) {
11                // Each element = sum of two elements above it
12                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
13            }
14
15            // Add current row to the triangle
16            triangle.push_back(row);
17        }
18        return triangle;
19    }
20};