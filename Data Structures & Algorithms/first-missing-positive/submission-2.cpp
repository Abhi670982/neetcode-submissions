class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        
       vector<bool>arr(1000001, false);

       for(int i=0; i<n; i++){
         if(nums[i] > 0){
            arr[nums[i]] = true;
         }
       }

       for(int i=1; i<1000001; i++){
        if(arr[i] == false){
            return i;
        }
       }
       return -1;
            
        
    }
};