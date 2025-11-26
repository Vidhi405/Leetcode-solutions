class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int length=0;

        string t=s;
        t.erase(0,t.find_first_not_of(" "));
        t.erase(t.find_last_not_of(" ")+1);

        for(int i=0;i<t.length();i++)
        {
            if(t[i]==' ')
                length=0;
            else
                length++;
        }

        return length;
    }
};
