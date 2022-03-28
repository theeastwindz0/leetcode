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
        ListNode* mergeKLists(vector<ListNode*>& lists) {
            ListNode *newHead=NULL;
            if(lists.size()==0)return NULL;
            int ct=-1;
            //If first array is empty then next non empty will become the returning array index
            for(int k=0;k<lists.size();k++)if(lists[k]){ct=k; break;}
            if(ct==-1) return NULL;
            int mInd=0,minNo=INT_MAX;
            for(int i=0;i<lists.size();i++) 
            { int cNo=0;
                if(!lists[i]) cNo=INT_MAX;else cNo=lists[i]->val;
                if(minNo>cNo){minNo=cNo;mInd=i;}
            }
            cout<<mInd;
            swap(lists[mInd],lists[0]);
            for(int k=0;k<lists.size();k++)if(lists[k]){ct=k; break;}
            for(int i=ct;i<lists.size()-1;i++)
            {
                ListNode *itHead=lists[ct];
                while(itHead && lists[i+1])
                {
                    int nextVal=0;
                    if(itHead->next==NULL) nextVal=INT_MAX;
                    else nextVal=itHead->next->val;
                    if((itHead->val<=lists[i+1]->val)&&(lists[i+1]->val <=nextVal))
                    {
                        ListNode *temp=new ListNode();
                        temp->val=lists[i+1]->val;
                        temp->next=itHead->next;
                        itHead->next=temp;
                        lists[i+1]=lists[i+1]->next;
                    }
                    else itHead=itHead->next;
                }
            }

            return lists[ct];
        }
    };