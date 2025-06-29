// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int n = arr.size();
        int floor_val = -1;
        int ceil_val = -1;
        
        for(int num : arr){
            if(num == x) return {x, x};
            
            if(num < x){
                if(floor_val == -1 || num > floor_val){
                    floor_val = num;
                }
            }
            
            if(num > x){
                if(ceil_val == -1 || num < ceil_val){
                    ceil_val = num;
                }
            }
        }
        
        return {floor_val, ceil_val};
    }
};