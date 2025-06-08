class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int top=0;
        int right=col-1;
        int bottom=row-1;
        int left=0;
    while(top<= bottom and left<=right)
    {

    
        // top print krunga 
        for(int i=left;i<=right;i++)
        {
            // cout<<matrix[top][i];
             ans.push_back(matrix[top][i]);
           
        }
         top++;
        //right side walla print krunga 
        for(int i=top;i<=bottom;i++)
        {
            // cout<<matrix[i][right];
             ans.push_back(matrix[i][right]);

        }
        right--;
        //bottom walla print krunga
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                // cout<<matrix[bottom][i];
                 ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        //left side wala print krunga
         if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
              ans.push_back(matrix[i][left]);
            }
           left++;
        }
    }
    return ans;

    }
};