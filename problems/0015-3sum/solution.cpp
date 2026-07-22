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
                vector<int> temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                    k--;
                    j++;
                }
                if(j>i+1)
                while(j<k && nums[j-1] == nums[j]) j++;
                if(k<n-1)
                while(j<k && nums[k+1] == nums[k]) k--;
            }
                
            }
        return ans;
    }
};

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n;i++){
//             if(i>0 && nums[i]==nums[i-1])  continue;
//         int j=i+1;
//         int k=n-1;
//            while(j<k) {
//             int sum=nums[i]+nums[j]+nums[k];
//             if(sum<0) j++;
//             else if(sum>0) k--;
//             else{
//                 vector<int> temp={nums[i],nums[j],nums[k]};
//                 ans.push_back(temp);
//                  j++;
//                  k--;
//             }
//             if(j>i+1)
//             while(j<k && nums[j]==nums[j-1]) j++;
//             if(k<n-1)
//             while(j<k && nums[k]==nums[k+1]) k--;
//            }
//         }
//         return ans;
//     }
// };