/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start=1;
        int end=n;
        int mid;
        while(start<=end){
            mid= start+(end-start)/2;
            int guess_num=guess(mid);
            if(guess_num==0)
            {
                return mid;
            }
            else if(guess_num==-1)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return -1;
    }
};