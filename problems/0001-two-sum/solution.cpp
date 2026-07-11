class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        printf("we return [-1,1] if the input values sum is not equal to target");
       for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target)  return {i,j};
        }
       }
       return {-1,-1};
    }
};