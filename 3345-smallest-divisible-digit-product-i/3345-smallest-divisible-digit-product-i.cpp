class Solution {
public:
    int multi(int n){
        int ans;
        int digit=1;
        while(n>0){
        digit=(digit*(n%10));
        n=n/10;
        }
        return digit;
    }
    int smallestNumber(int n, int t) {
        while(n>0){
          int d=multi(n);
         if(d%t==0)return n;
         else n++;
        }
        return -1;
    }
};