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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head) return head;
        
        int tmp = head -> val;
        
        if(head -> next != NULL) head = head -> next;
        else return head;
        
        
        ListNode* p = new ListNode();
        ListNode *q = p;
        //cout << q -> val << endl;
        p -> next = new ListNode(tmp);
        p = p -> next;
        
        
        while(head)
        {
            
            cout << "out " << head -> val << endl;
            if(tmp != head -> val)
            {
                p -> next = new ListNode((head -> val));
                cout << head -> val << endl;
                tmp = head -> val;
                p = p -> next;
            }
            
            head = head -> next;
            
        }
        
        return q -> next;
        
    }
};