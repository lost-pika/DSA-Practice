class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int> result;

        // odd length
        if(n%2 != 0){
            return {};
        }

        sort(changed.begin(), changed.end());
        
        map<int, int> mp;

        // store frequency of each number
        for(int &num : changed){
            mp[num]++;
        }

        for(int &num : changed){
            int twice = 2*num;

            if(mp[num] == 0) continue; // skip

            if(mp.find(twice) == mp.end() || mp[twice] == 0){
                return {};
            }

            result.push_back(num);

            mp[num]--;
            mp[twice]--;
        }

        return result;
    }
};