class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>rai;
        int start=0;
        int end=numbers.size()-1;
        while(start<end)
        {
           if(numbers[start]+numbers[end]==target) 
           {
            rai.push_back(start+1);
            rai.push_back(end+1);
            return rai;
           }
           else
           {
            if(numbers[start]+numbers[end]>target) end--;
            else start++;
           }
        }
        return rai;
    }
};