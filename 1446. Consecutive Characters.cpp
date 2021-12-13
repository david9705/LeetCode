class Solution {
public:
    int maxPower(string s) {
    
        char cur = s[0];
        char pre = ' ';
        int cnt = 1, pre_cnt = 1;
        
        for(int i = 1; i < s.length(); i ++)
        {
            if(s[i] == cur)
            {
                cnt ++;
            }
            else
            {
                if(cnt > pre_cnt)
                {
                    pre = cur;
                    pre_cnt = cnt;
                }
                
                cur = s[i];
                cnt = 1;
                
            }
        }
        
        return max(pre_cnt, cnt);
        
    } 
};