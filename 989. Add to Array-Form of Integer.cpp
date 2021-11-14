class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        
        
        for(int i = A.size() - 1; i >= 0; i --)
        {
            int tmp = A[i];
            A[i] = (A[i] + K) % 10;
            K = (tmp + K) / 10;
        }
        
        while(K > 0)
        {
            int res = K % 10;
            K /= 10;
            A.insert(A.begin(), res);
        }
        
        return A;
        
        
    }
};