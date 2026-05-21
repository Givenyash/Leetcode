class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL or head->next == NULL or k == 0){
            return head;
        }

        int len = 1;
        ListNode* tail = head;

        while(tail->next != NULL){
            tail = tail->next;
            len++;
        }

        k = k % len;
        if(k == 0){
            return head;
        }

        tail->next = head;
        tail = head;

        for(int i=0; i < len - k - 1; i++){
            tail = tail->next;
        }
        head = tail->next;
        tail->next = NULL;

        return head;
    }
};