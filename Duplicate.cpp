class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
//         int a,b;
//         for(int i=0; i < nums.size();i++){
//             a = nums[i];
//             cout<< "a :" << a <<endl;
//             for (int j = i+1;j < nums.size();j++){
//                 b = nums[j];
//                 cout<< "b :" << b <<endl;
//                 if(a == b){
//                     return true;
//                 }
//             }
             
//         }
//         return false;
        
        sort(nums.begin(),nums.end());
        for (int i =1;i<nums.size();i++){
            if(nums[i-1] == nums[i]){
                return true;
            }
        }
        return false;
    }
        
};
