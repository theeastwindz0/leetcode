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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *l2End=list2,*part1=NULL,*temp=list1;
        
        while(l2End->next!=NULL) l2End=l2End->next;
        
        while(temp)
        {
           if(temp->next!=NULL)if(!--a)part1=temp;
            if(!b--){l2End->next=temp->next;}
            temp=temp->next;
        }
        part1->next=list2;
        return list1;
    }
};