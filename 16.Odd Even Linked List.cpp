/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
       ListNode* temp=head;
        
        
        if(!head)
            return NULL;
        if(head->next==NULL)
            return head;
        ListNode* odd=head,*even=head->next,*ehead=even;
        
        while(odd->next && even->next)
        {
            if(even->next)
            {
                odd->next=even->next;
                odd=even->next;
            }
            if(odd->next)
            {
                even->next=odd->next;
                even=odd->next;
            }
            
        }
        odd->next=ehead;
        even->next=NULL;
        
        return head;

        
            
    }
};
