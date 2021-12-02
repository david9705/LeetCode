// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long long int l = 1, r = n;
        
        while(l < r)
        {
            long long int mid = (l + (r-1)) / 2;
            
            if(isBadVersion(mid)) r = mid;
            else l = mid + 1;
            
        }
        
        return l;
        
        
    }
};