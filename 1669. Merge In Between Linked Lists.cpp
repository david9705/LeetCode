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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        
        ListNode *p = new ListNode(0);
        ListNode *q = list1;
        
        int cnt = 0;
        
        while(q != NULL && cnt < b)
        {
            if(cnt == a-1) p = q;
            
            q = q -> next;
            cnt ++;
        }
        
        p -> next = list2;
        
        while(list2 -> next != NULL) list2 = list2 -> next;
        
        list2 -> next = q -> next;
        
        return list1;
        
        
        
        
    }
};