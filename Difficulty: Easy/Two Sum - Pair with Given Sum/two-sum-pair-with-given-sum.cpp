
// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int i=0;
        int n=arr.size()-1;
        while(i<n){
            int sum=arr[i]+arr[n];
            if(sum==target){
                return true;
            }else if (sum>target){
                n--;
            }else{
                i++;
            }
        }
        return false;
        
    }
};