class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int mid,start=0,end=n-1;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(arr[mid]==target)return mid;
            else if(arr[mid]<target)start=mid+1;
            else end=mid-1;
        }
       return -1;
    }
};