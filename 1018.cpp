/* This is the solution for LeetCode problem 1018 Binary Prefix Divisible by 5
  We are given a binary array, and for each prefix we want to know whether it forms a number divisible by 5.
However, converting each prefix into a full integer would be too slow and could overflow for large inputs.

The key observation is:

We don't need the full number — only its remainder modulo 5.

A number is divisible by 5 iff its remainder mod 5 is 0.

When we append a bit to a binary number:
  Current number = previous_number * 2 + new_bit

Instead of tracking the entire number, we track only:
  remainder = (remainder * 2 + bit) % 5

Using modulo keeps the number small (0–4), fast, and overflow-free.

At each step:
  If remainder == 0, the prefix forms a number divisible by 5 → push true
  Otherwise → push false

This works because modulo arithmetic preserves divisibility.


Time Complexity: O(n)
Space Complexity: O(1)

*/

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int result=0;
        for(int bit: nums)
        {
            result=(result*2 + bit) % 5 ;
            ans.push_back(result==0);
        }

        return ans;
    }
};
