/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode* modhead=head;
    struct ListNode* i=head;
    struct ListNode* j=head->next;
    int sum=0;
    while(j->next!=NULL){
        if(j->val==0){
            sum=0;
            i=i->next;
        }
        sum+=j->val;
        i->val=sum;
        j=j->next;
    }
    i->next=NULL;
    return modhead;
}
