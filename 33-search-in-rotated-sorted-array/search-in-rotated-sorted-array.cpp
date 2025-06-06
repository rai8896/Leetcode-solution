class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int ans;
        int end= nums.size()-1;
        int mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]== target)
            {
                return mid;
            }
            // pta krunga ki left sorted hai ya right sorted hai??

            else if(nums[mid]>=nums[0])              //left side sorted hai
             {
                // pta krunga ki target left wale range me aayega yaa nhi
                // agar left ki range me aayega to end ko mid -1 kr dunga
                // agr left ki range me nhi aayega to right sorted ki taraf jaunaga then start =mid +1 krunga
                if(nums[start]<=target and nums[mid]>=target)  //lefte ke range me hai
                {
                    end=mid-1;
                }else   //right wale area me hai...
                {
                    start=mid+1;
                }
             }else    // right side sorted hai aur fir same kaam karenge  yha right wale ke range me target ko dekhunga
             {
                if(nums[mid]<= target and nums[end]>= target)   // right ki range me hai 
                {
                    start=mid+1;// right side me hin seach krunga
                }
                else
                {
                    end=mid-1; // agr righ ki range me nhi hai to left side jaker seach krunga
                }
             }
        }
        return -1;

    }
};