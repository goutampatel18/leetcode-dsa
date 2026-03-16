1class Solution {
2public:
3
4    int finddays(vector<int>& weights, int cap ){
5
6        int days=1, load=0;
7        for(int i=0; i<weights.size(); i++){
8            if(weights[i]+load > cap){
9                days++;
10                load=weights[i];
11            }
12            else{
13                load+=weights[i];
14            }
15        }
16        return days;
17    }
18
19
20    int shipWithinDays(vector<int>& weights, int days) {
21        int n= weights.size(), sum=0, cap=0;
22        int maxx= *max_element(weights.begin(), weights.end());
23        int ans;
24
25
26        for(int i=0; i<n; i++ ){
27            sum+=weights[i];
28        }
29
30        int low=maxx, high=sum;
31
32        while(low<=high){
33            int mid =low+(high-low)/2;
34            int no_of_days = finddays(weights, mid);
35            if(no_of_days<=days){
36                high=mid-1;
37                ans =mid;
38                
39            }
40            else{
41                low=mid+1;
42                //  ans=mid;
43            }
44        }
45
46        return ans;
47    }
48};