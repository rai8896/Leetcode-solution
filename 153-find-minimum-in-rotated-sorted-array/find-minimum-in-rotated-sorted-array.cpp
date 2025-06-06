class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int ans=nums[0];
        int mid;
        while(start<=end){
            mid=start+(end- start)/2;
            //left side sorted
            if(nums[mid]>= nums[0])
            {
                start=mid+1;

            }
            //right sided sorted
            else
            {
                ans=nums[mid];
                end=mid-1;
            }
        }
        return ans;
    }
};