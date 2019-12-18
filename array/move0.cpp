class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int num = nums.size();
        int k = 0;
        int n = 0;
        for(int i = 0; i < num; i++){
            if(nums[i] != 0){
                n = nums[i];
                nums.erase(nums.begin()+i);
                nums.insert(nums.begin()+k, n);
                k++;         
            }
            }
    }
};