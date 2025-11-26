class Solution {

public:

    int smallestRepunitDivByK(int k) {

        if(k==1)

            return 1;


        if(k%2==0 || k%5==0)

            return -1;


        int r=1%k;

        int length=1;


        while(r!=0)

        {

            r=(r*10+1)%k;

            length=length+1;

            if(length>k)

                return -1;

        }


        return length;

    }

};
