class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
       int l = 0;
       int r = n-1;
       while(l<=r){
        if(nums[r] == val){
            r--;
        }else if(nums[l] != val){
            l++;
        }else{
           swap(nums[l], nums[r]);
           l++;
           r--;
        }
       }
       int c=0;
       for(int i=0; i<n; i++){
        if(nums[i] != val){
            c++;
        }
       }
       return c;
    }
};