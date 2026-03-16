1class Solution {
2public:
3
4    void fn(int col, vector<string>& board, vector<vector<string>>& ans, vector<int>& leftrow, vector<int>& lowerdia, vector<int>& upperdia, int n){
5        if(col==n){
6            ans.push_back(board);
7            return;
8        }
9
10        for(int row=0; row<n; row++){
11            if(leftrow[row]==0 && lowerdia[row+col]==0 && upperdia[n-1+col-row]==0){
12                board[row][col]='Q';
13                leftrow[row]=1; lowerdia[row+col]=1 ; upperdia[n-1+col-row]=1;
14                fn(col+1, board, ans, leftrow, lowerdia, upperdia, n);
15                board[row][col]='.';
16                leftrow[row]=0; lowerdia[row+col]=0; upperdia[n-1 + col - row]=0;
17                
18            }
19        }
20    }
21    vector<vector<string>> solveNQueens(int n) {
22        vector<vector<string>> ans;
23        vector<string> board(n);
24        string s(n, '.');
25        for(int i=0; i<n; i++){
26            board[i]=s;
27        }
28        vector<int> leftrow(n, 0), upperdia(2*n-1, 0), lowerdia(2*n-1, 0);
29        fn(0, board, ans, leftrow, lowerdia, upperdia, n);
30        return ans;
31    }
32};