class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size() / 2;
        
        sort(nums.begin(), nums.end());
        
        int cnt = 1;
        int pre = nums[0];
        
        
        for(int i = 1; i < nums.size();i ++)
        {
            if(nums[i] != pre)
            {
                if(cnt > n)
                {
                    break;
                }
                else
                {
                    pre = nums[i];
                    cnt = 1;
                }
            }
            else
            {
                cnt ++;
            }
        }
        
        
        return pre;
        
    }
};