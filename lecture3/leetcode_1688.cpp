class Solution {
public:
    int numberOfMatches(int n) {
        int ans=0;
       while(n>1){
         int temp=n/2;
         ans += temp;
         n=n-temp;

       }
     return ans;
    }
};