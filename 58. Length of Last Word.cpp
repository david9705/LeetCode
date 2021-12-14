class Solution {
public:
    int lengthOfLastWord(string s) {
        
        string tmp = "";
        
        s += " ";
        
        int res = 0;
        
        for(int i = 0; i < s.length() - 1; i ++)
        {
           if(s[i] != ' ' && s[i+1] != ' ')
           {
               tmp += s[i];
           }
           else if(s[i] != ' ' && s[i+1] == ' ')
           {
               tmp += s[i];
               res = tmp.length(); 
               tmp.clear();
           }

        }
        
        return res;
        
    }
};