1class Solution {
2public:
3    int differenceOfSum(vector<int>& nums) {
4        int elementSum = 0, digitSum = 0;
5
6        for (int num : nums) {
7            elementSum += num;
8
9            while (num > 0) {
10                digitSum += num % 10;
11                num /= 10;
12            }
13        }
14
15        return abs(elementSum - digitSum);
16    }
17};
18
19