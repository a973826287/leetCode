class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        int n = 0;
        for(int i = 0; i < nums.size(); i++){
                n = target - nums[i];     
                for(int j = i + 1; j < nums.size(); j++){
                    if(n == nums[j]){
                        output.push_back(i);
                        output.push_back(j);
                        return output;
                    }
                }
            }
    return output;
    }
};