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
        // int l = 0, h = n;
        while (guess(n)!=0)
        {
            if(guess(n) == -1)
                n = n-1;
            else if(guess(n) == 1)
                n = n + 1;     
        }
        return n;
        // cout<<guess(n)<<" ";
        // return -100;
    }
};