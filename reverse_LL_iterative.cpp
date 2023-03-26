
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head == NULL || head->next == NULL){
            return head;
        }
        struct Node *prev = NULL;
        struct Node *curr = head;
        struct Node *forw = NULL;
        
        while(curr != NULL){
            forw = curr->next; // backup
            curr->next = prev; // link
            prev = curr ; 
            curr = forw;
        }
        return prev;
    }
    
};
    

    