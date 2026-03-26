1class Solution:
2    def rotateString(self, s1: str, goal: str) -> bool:
3        st = s1 + s1
4        if len(goal) != len(s1):
5            return False
6        return goal in st
7