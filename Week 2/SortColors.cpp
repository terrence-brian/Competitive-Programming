class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Using Quicksort with 1 as pivot
        int l = 0;
        int r = nums.size()-1;
        int mid = 1;

        for(int i=0; i<=r; i++){
            if(nums[i]<mid){
                swap(nums[i], nums[l]);
                l++;
            }
            else if(nums[i]>mid){
                swap(nums[i], nums[r]);
                i--;
                r--;
            }
        }
    }
};
