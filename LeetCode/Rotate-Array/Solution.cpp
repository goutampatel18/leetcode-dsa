1
2
3class Solution {
4public:
5    void rotate(vector<int>& arr, int k) {
6        int n= arr.size();
7
8        // normalization
9        if(k>n){k%=n;}
10
11        // step 1 reverse the array
12
13        int st=0, end=n-1;
14        while(st<end){
15            swap(arr[st],arr[end]);
16            st++; end--;
17        }
18
19        // step 2 reverse first k elements
20
21        int k_st=0, k_end=k-1;
22        while(k_st<k_end){
23            swap(arr[k_st], arr[k_end]);
24            k_st++;
25            k_end--;
26        }
27
28        //step 3 reverse remaining (n-k) elements
29
30        int nk_st=k, nk_end=n-1;
31         while(nk_st<nk_end){
32            swap(arr[nk_st],arr[nk_end]);
33            nk_st++;
34            nk_end--;
35        }
36
37    }
38   
39};