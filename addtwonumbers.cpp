class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        std::vector<int> v1;
        std::vector<int> v2;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        while (temp1 != nullptr) {
            v1.insert(v1.begin(), temp1->val);
            temp1 = temp1->next;
        }

        while (temp2 != nullptr) {
            v2.insert(v2.begin(), temp2->val);
            temp2 = temp2->next;
        }

        long long num1 = 0;
        for (int x : v1) {
            num1 = num1 * 10 + x;
        }

        long long num2 = 0;
        for (int y : v2) {
            num2 = num2 * 10 + y;
        }

        long long sum = num1 + num2;

        if (sum == 0) return new ListNode(0);

        ListNode* head = nullptr;
        ListNode* curr = nullptr;

        while (sum > 0) {
            ListNode* node = new ListNode(sum % 10);
            sum = sum / 10;

            if (head == nullptr) {
                head = node;
                curr = node;
            } else {
                curr->next = node;
                curr = node;
            }
        }
        return head;
    }
};
