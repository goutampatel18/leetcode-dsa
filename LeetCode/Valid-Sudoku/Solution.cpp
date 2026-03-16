1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4
5        bool rows[9][9] = {false};
6        bool cols[9][9] = {false};
7        bool boxes[9][9] = {false};
8
9        for(int i=0;i<9;i++){
10            for(int j=0;j<9;j++){
11
12                if(board[i][j]=='.') continue;
13
14                int num = board[i][j] - '1';
15                int box = (i/3)*3 + j/3;
16
17                if(rows[i][num] || cols[j][num] || boxes[box][num])
18                    return false;
19
20                rows[i][num] = cols[j][num] = boxes[box][num] = true;
21            }
22        }
23
24        return true;
25    }
26};