1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4     int   st=0,end=s.size()-1;
5        while(st<end){
6            swap(s[st++],s[end--]);
7
8        }
9    }
10};