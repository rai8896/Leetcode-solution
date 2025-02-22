class Solution {
public:
    int xorOperation(int n, int start) {
        int pxor = 0;
        
        for(int i=0;i<n;i++)
        {
           pxor=pxor^(start+2*i);
        }
        return pxor;

    }
};