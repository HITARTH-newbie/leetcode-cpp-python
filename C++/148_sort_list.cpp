class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr) 
        return nullptr;   

        vector<int> r;
        ListNode *temp = head;
        while (temp != nullptr) {
            r.push_back(temp->val);
            temp = temp->next;
        }

        sort(r.begin(), r.end());

        ListNode *dummy = new ListNode(0);   
        ListNode *tail = dummy;              

        for (int x : r) {
            tail->next = new ListNode(x);
            tail = tail->next;                
        }

        return dummy->next;             
    }
};
