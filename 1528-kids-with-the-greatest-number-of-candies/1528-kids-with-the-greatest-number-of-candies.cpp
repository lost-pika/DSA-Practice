class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();

        int maxCandy = *max_element(candies.begin(), candies.end());
        vector<bool> result(n, false);

        for(int i = 0; i<n; i++){
            if(candies[i] + extraCandies >= maxCandy){
                result[i] = true;
            }
        }

        return result;
    }
};