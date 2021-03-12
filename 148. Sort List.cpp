/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        
        if(!head || !(head -> next)) return head; 
        
        ListNode* ans = new ListNode();
        ListNode* pre = ans;
        
        vector<int> res;
        while(head)
        {
            res.push_back((head -> val));
            
            head = head -> next;
            
        }
        
        sort(res.begin(), res.end());
        
    
        
        for(int i = 0 ; i < res.size(); i ++)
        {
            //cout << res[i] << endl;
            ans -> next = new ListNode(res[i]);
            ans = ans -> next;
        }
        
        return pre -> next;
        
    }
};