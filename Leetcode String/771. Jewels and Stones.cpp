class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int sum= 0;
        for( int i = 0; i<jewels.length(); i++){
            sum =sum + count(stones.begin(),stones.end(),jewels[i]);
        }
        return sum;
    }
};