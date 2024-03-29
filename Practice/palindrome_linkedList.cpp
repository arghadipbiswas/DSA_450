// Example 1:
// Input: head = [1,2,2,1]
// Output: true


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
    bool isPalindrome(ListNode* head) {
        vector<int> values;
        ListNode* temp = head;
        while(temp -> next != NULL)
        {
            values.push_back(temp -> val);
            temp = temp -> next;
        }
        values.push_back(temp -> val);
        int n = values.size();
        for(int i = 0 ; i< n/2; i++)
        {
            if(values[i] != values[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
};