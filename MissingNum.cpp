class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> MissingNumbers;
        int current;
        //Mark all the numbers that are present as -ve.
        for (int i =0;i<nums.size();i++){
            current = abs(nums[i]);
            nums[current -1] = - abs(nums[current-1]);
        }
        //All the missing numbers are the psoitive numbers index+1. 
        for(int j=0;j<nums.size();j++){
            if (nums[j] > 0){
                MissingNumbers.emplace_back(j+1);
            }
        }
        
        return MissingNumbers;
    }
};
