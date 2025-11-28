class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> arr;
        for(int i=0;i<n;i++)
        {
            vector<int> res(i+1,1);
            for(int j=1;j<i;j++)
            {
                res[j]=arr[i-1][j-1]+arr[i-1][j];
            }
            arr.push_back(res);
            
        }

        return arr;
    }
};
