class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        vector<vector<int>> res;
        
        sort(arr.begin(), arr.end());
        
        int diff = 2147483647;
        
        
        //for(int i = 0; i < arr.size(); i ++) cout << arr[i]<<endl;
        
        for(int i = 1; i < arr.size(); i ++)
        {
            int tmp = abs(arr[i] - arr[i-1]);
            if(tmp < diff) diff = tmp;
            //cout << diff << endl;
        }
        
        for(int i = 1; i < arr.size(); i ++)
        {
            int tmp = abs(arr[i] - arr[i-1]);
            
            if(tmp == diff)
            {
                res.push_back({arr[i-1], arr[i]});
            }
            
        }
        
        
            
        
        
        
        return res;
        
    }
};