class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i = 0;i < n; i++){
            if(i>0 && nums[i-1] == nums[i]) continue;
            int j = i + 1;
            int k = n-1;
            while(j<k){
            int sum = nums[j] + nums[k] + nums[i];
                if(sum>0){ 
                    k--;
                }
                else if(sum<0) j++;
                else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    k--;
                    j++;
                }
                while(j<k && nums[j-1] == nums[j]) continue;
                while(j<k && nums[k+1] == nums[k]) continue;
            }
                
            }
        return ans;
    }
};