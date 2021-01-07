class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i ++)
        {
            if(nums[i] != nums[nums[i] - 1])
              {
                  swap(nums[i], nums[nums[i] - 1]); 
                  i --;
              }
        }
               
        for(int i = 0; i < nums.size(); i ++)
        {
            if(i + 1 != nums[i])
            {
                ans.push_back(i + 1);
            }
        }
        
        return ans;
    }
};