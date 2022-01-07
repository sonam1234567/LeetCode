class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //vector<int> numbers = nums;
        sort(nums.begin(),nums.end());
        if(nums[nums.size() -1] == nums.size()){
            for(int i = 1; i<nums.size();i++){
                if((nums[i-1] + 1 != nums[i])){
                    return (nums[i] -1);
                }
            }
        }
        else{
            return nums.size();
        }
        
        return 0;
    }
};
