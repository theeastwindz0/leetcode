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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v1;
        ListNode *ptr=NULL,*tail=NULL;
        while(list1!=NULL)
        {
            v1.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=NULL)
        {
            v1.push_back(list2->val);
            list2=list2->next;
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
        {
            ListNode *temp=new ListNode();
            temp->val=v1[i];
            if(ptr==NULL)
            {
                ptr=temp;
                tail=ptr;
            }
            else
            {
                tail->next=temp;
                tail=temp;
            }
                
        }
        
        
        return ptr;
    }
};