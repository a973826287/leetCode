class Solution {
public:
    vector<int> plusOne(vector<int>& digits){
        int k = 0;
        int num = 0;
       
        digits[digits.size()-1] = digits[digits.size()-1]+1;
        num = digits.size();
       
        for(int i = num; i > 0; i--){
            if(digits[i-1] != 10){
                return digits;
        } 
            
            if(digits[i-1] == 10){
                digits[i-1] = 0;
                if(i != 1)
                digits[i-2] = digits[i-2] + 1;   
                if(i == 1)
                    digits.insert(digits.begin(),1);
            }   
        }      
        return digits;
        }  
};