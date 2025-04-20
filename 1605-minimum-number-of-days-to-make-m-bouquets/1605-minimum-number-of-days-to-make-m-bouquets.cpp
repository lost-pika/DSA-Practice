class Solution {
public:
    int findMaxi(vector<int>& bloomDay){
        int n = bloomDay.size();
        int maxi = INT_MIN;
        for(int i = 0; i<n; i++){
            maxi = max(maxi, bloomDay[i]);
        }
        return maxi;
    }

    int findMini(vector<int>& bloomDay){
        int n = bloomDay.size();
        int mini = INT_MAX;
        for(int i = 0; i<n; i++){
            mini = min(mini, bloomDay[i]);
        }
        return mini;
    }

    bool Possible(vector<int>& bloomDay, int day, int m, int k){
        int n = bloomDay.size();
        int noOfB = 0;
        int cnt = 0;
        for(int i = 0; i<n; i++){
            if(bloomDay[i] <= day){
                cnt++;
            }
            else{
                noOfB += (cnt/k);
                cnt = 0;
            }
        }
        noOfB += (cnt/k);
        return noOfB >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = m * 1LL * k * 1LL;
        if(n < val) return -1;
        int low = findMini(bloomDay);
        int high = findMaxi(bloomDay);
        while(low <= high){
            int mid = (low+high)/2;
            if(Possible(bloomDay, mid, m, k)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};