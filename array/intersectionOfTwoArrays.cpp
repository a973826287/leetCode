class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        vector<int> num;
        int m = 0;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                m = 0;
                if(nums1[i] == nums2[j]){
                    for(int k =0; k < num.size(); k++){
                        if(j == num[k]){
                            m = 1;
                            break;
                    }
                    }
                    if(m == 0){
                    num.push_back(j);
                    vec.push_back(nums1[i]);
                    break;
                    }
                }
            }
        }
        return vec;
    }
};