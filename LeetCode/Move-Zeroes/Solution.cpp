1class Solution {
2public:
3    void moveZeroes(vector<int>& arr) {
4        int j=-1, n=arr.size();
5        for(int i=0; i<n; i++){
6            if(arr[i]==0)
7            { j=i; 
8              break;}
9            }
10
11        if(j==-1){return;}
12
13        for(int i=j+1; i<n; i++){
14            if(arr[i]!=0)
15            { swap(arr[i], arr[j]);
16            j++;
17            }
18            
19        }
20    }
21};