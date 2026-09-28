class Solution {
public:
    int maxDepth(string s) {
     int maxi=0;
     int count=0;
     for(char ch:s){
        if(ch=='(')count++;
         if(ch==')')count--;
        maxi=max(count,maxi);
     }
     return maxi;
    }
};