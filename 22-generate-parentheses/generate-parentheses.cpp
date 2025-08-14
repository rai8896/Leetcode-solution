class Solution {
public:





     void paranthesis(int n,int left,int right,vector<string>&ans,string &temp)
     {  

        //base case
        if(left +right ==2*n)
        {
            ans.push_back(temp);
            return;
        }
        // left paranthesis add krna hai
        if(left<n)
        {   
           temp.push_back('(');
            paranthesis(n,left+1,right,ans,temp);
            temp.pop_back();

        }
        if(right<left)
        {
            temp.push_back(')');
            paranthesis(n,left,right+1,ans,temp);
            temp.pop_back();
        }
     }
    vector<string> generateParenthesis(int n) {
       vector<string> ans;
        string temp;
        paranthesis(n,0,0,ans,temp);
        return ans;
    }
};