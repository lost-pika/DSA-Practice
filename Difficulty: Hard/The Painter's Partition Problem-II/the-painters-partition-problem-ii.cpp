//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
  
    int noOfPainters(vector<int>& arr, int totalPainters){
        int Painters = 1;
        long long sumPainters = 0;
        for(int i = 0; i<arr.size(); i++){
            if(sumPainters + arr[i] <= totalPainters){
                sumPainters += arr[i];
            }
            else{
                Painters++;
                sumPainters = arr[i];
            }
        }
        return Painters;
        
    }
    int minTime(vector<int>& arr, int k) {
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        while(low <= high){
            int mid = (low+high)/2;
            int Painters = noOfPainters(arr, mid);
            if(Painters > k){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.minTime(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends