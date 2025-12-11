class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num>=0)
        {
            int sq=sqrt(num);
            return sq*sq==num;
        }
        return false;
    }
};
