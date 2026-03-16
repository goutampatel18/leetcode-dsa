1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& arr) {
4        int n= arr.size(), count1=0, count2=0, el1=INT_MIN, el2=INT_MIN;
5         int mini = n / 3 + 1;
6         vector<int> result;
7
8        for(int i=0; i<n; i++)
9        {
10            
11            if(el1==arr[i]){
12                count1++;
13            }
14
15
16            else if(el2==arr[i]){
17                count2++;
18            }
19
20            else if(count1==0 && el1 != arr[i]){
21                count1=1;
22                el1= arr[i];
23            }
24
25            else if(count2==0 && el2 != arr[i]){
26                count2=1;
27                el2= arr[i];
28            }
29
30
31            else{
32                count1--;
33                count2--;
34            }
35
36              
37        }
38
39        count1 = 0, count2 = 0; 
40        for (int i = 0; i < n; i++)
41         {
42            if (arr[i] == el1) {
43                count1++; 
44            }
45            if (arr[i] == el2) {
46                count2++;
47            }
48        }
49
50        if(count1>=mini){
51            result.push_back(el1);
52        }
53
54        if(count2>=mini && el1 != el2){
55            result.push_back(el2);
56        }
57
58
59        
60        return result;
61    }
62};