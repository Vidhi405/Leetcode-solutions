class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxlen=0;
        unordered_set<char> Set;
        int left=0;

        for(int right=0;right<n;right++)
        {
            if(Set.count(s[right])==0){
                Set.insert(s[right]);
                maxlen=max(maxlen,right-left+1);
            }
            else
            {
                while(Set.count(s[right]))
                {
                    Set.erase(s[left]);
                    left++;
                }
                Set.insert(s[right]);
            }
        }

        return maxlen;
    }
};
