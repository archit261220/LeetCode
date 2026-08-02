class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice =0;
        int bobs=0;
        int p=0;
        int q=piles.size()-1;
        while(p<q){
            alice +=max(piles[p],piles[q]);
            bobs +=min(piles[p],piles[q]);
            p++;q--;
        }
        return alice>bobs;
    }
};