/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1,h=n,m;
        while(l<=h){
            m=l+(h-l)/2;
            if(guess(m)==0){
                return m;
            }else if(guess(m)==-1){
                h=m-1;;
            }else{
                l=m+1;
            }
        }
        return 0;
    }
};