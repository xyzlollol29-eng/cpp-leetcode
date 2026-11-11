//took help of claude on this one not mainly on logic 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* newHead = head->next;   
        ListNode* curr = head;
        ListNode* prev = nullptr;         
        ListNode* ahead = nullptr;
        ListNode* tail = nullptr;       
        while (curr != nullptr && curr->next != nullptr) {  
            ahead = curr->next;        

            prev = ahead->next;         
            ahead->next = curr;
            curr->next = prev;

            if (tail != nullptr) {        //still confuses me a little but i understand the idea behind it, this is basically moving forward in the linked list i know it will work but i cant understand how it wants to work >:( 
                tail->next = ahead;
            }
            tail = curr;                 

            curr = curr->next;            
        }
        return newHead;                
    }
};
