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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int counter = 0;
        while(temp != NULL){
          counter++;
          temp = temp->next;
        }
        if( counter == n){
            ListNode* newHead = head -> next;
            delete head;
            return newHead;
        }
        temp = head;
        int res = counter - n;
        while(temp != NULL){
          res--;
          if(res == 0) break;
          temp = temp->next;
        }
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
        return head;
    }
};