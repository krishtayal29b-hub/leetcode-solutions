class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n=numRows;
        for(int i=1;i<=n;i++){
            long long ansi=1;
            vector<int> ansrow;
            ansrow.push_back(1);
            for(int j=1;j<i;j++){
                ansi=ansi*(i-j);
                ansi=ansi/j;
                ansrow.push_back(ansi);
            }
            ans.push_back(ansrow);
        }
        return ans;
    }
};