class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        if(head == NULL || head->next == NULL)
            return head->data;
        if(head->next->next == NULL){
            return head->next->data;
        }
        Node* temp = head ;
        Node* slow = head ;
        Node* fast = head ;
        int flag = 0 ;
        while(true){
            fast = fast->next->next;
            if(fast->next == NULL){
                flag = 1;
                break;
            }
            if(fast->next->next == NULL){
                slow = slow->next;
                flag = 1;
                break;
            }
            slow = slow->next;
        }
        int ans;
        if(flag == 1){
            ans = slow->next->data;
            return ans;
        }
    }
};