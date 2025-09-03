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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
        return head;
        //count the nodes
        int count=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        };
        k=k%count;
        if(k==0) return head;
        count-=k;
        ListNode *prev=NULL,*curr=head;
        while(count--)
        {
            prev= curr;
            curr=curr->next;
        }
        prev->next=NULL;
        ListNode *aux = curr;
        while(aux->next!=NULL)
        {
            aux=aux->next;
        }
        aux->next=head;
        head= curr;
        return head;


    }
};