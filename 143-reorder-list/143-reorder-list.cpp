// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     void reorderList(ListNode* head) {
//         ListNode *temp=head;
//         int ct=0;
//         while(temp){ct++;temp=temp->next;}
//         stack<ListNode*>s1;
//         if(ct%2==0)ct=ct/2;
//         else ct=ct/2+1;
//         cout<<ct<<endl;
//         int ct2=0;
//         temp=head;
//         while(temp){
//             if(ct2>=ct)s1.push(temp);
//             temp=temp->next;
//             ct2++;
//         }
//         // while(!s1.empty()){cout<<s1.top()->val;s1.pop();}
//         temp=head;
//             ct=1;
//         while(temp){
//                 ListNode *temp2=temp->next;
                
//                 temp->next=s1.top();
//                 temp=temp->next;
//                 temp->next=temp2;
//                 s1.pop();
//             // temp=temp->next;
//         }
        

//     }
// };

// // 1 2 3 4 
// // 1 5 2 4 3


class Solution {
public:
    void reorderList(ListNode* head) {
        if ((!head) || (!head->next) || (!head->next->next)) return;
        
        stack<ListNode*>s1;
        ListNode *temp=head;
        int ct=0;
        while(temp){
            s1.push(temp);
            temp=temp->next;
            ct++;
        }
        temp=head;
        
        for(int i=0;i<ct/2;i++){
            ListNode *temp2=s1.top();
            s1.pop();
            temp2->next=temp->next;
            temp->next=temp2;
            temp=temp->next->next;
        }  
        temp->next=NULL;
    }
};
