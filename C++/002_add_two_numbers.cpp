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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *curr1=l1;
        ListNode *curr2=l2;
        int carry=0;
        int s=0;
        ListNode *temp=new ListNode(0);
        ListNode *curr=temp;
        while(curr1!=nullptr || curr2!=nullptr ||carry!=0)
        {
            int s=carry;
             if(curr1!=nullptr)
             {
                s+=curr1->val;
                curr1=curr1->next;
             }
             if(curr2!=nullptr)
             {
                s+=curr2->val;
                curr2=curr2->next;
             }
             int d=s%10;
             carry=s/10;
             curr->next=new ListNode(d);
             curr=curr->next;
        }
        return temp->next;
    }
};
