/*
LeetCode: 876. Middle of the Linked List
Learning: Linked List, Two Pointers(fast and slow)
Description: Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

Example 1:
Input: head = [1,2,3,4,5]
Output: 3
Explanation: The middle node of the list is node 3.

Example 2:
Input: head = [1,2,3,4,5,6]
Output: 4
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one. 
*/
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    // ListNode(int value) : val(value), next(nullptr) {} //  same, constructor
    ListNode(int value) {                                 //  same, constructor
      val = value;
      next = nullptr;
    }
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        // if (!head || !head->next) return head; // same as above
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {// && দ্বারা মিডের ২য় ভাল্যুকে নিশ্চিত করা হয়েছে
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
};

// void printList(ListNode* head) {
//     while (head != nullptr) {
//         cout << head->val << " -> ";
//         head = head->next;
//     }
//     cout << "nullptr" << endl;
// }

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // cout << "Original List: ";
    // printList(head);

    Solution solution;
    ListNode* middle = solution.middleNode(head);

    // cout << "Middle Node: " << middle->val << endl;
    cout << middle->val << endl;

    // Clean up allocated memory
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
