1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n = height.size();
5           int length, width,rp=n-1, lp=0,cw, mw = 0;
6           while(lp<rp)
7           {
8            width = rp-lp;
9            length = min(height[rp],height[lp]);
10            cw = width*length;
11            mw = max(cw,mw);
12            if(height[rp]>height[lp])
13            {
14                lp++;
15            }
16            else
17            {
18                rp--;
19            }
20           }
21           return mw;
22    }
23};