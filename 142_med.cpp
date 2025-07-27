ListNode *detectCycle(ListNode *head) {
    if (head == 0)
        return NULL;
    unordered_map<ListNode*, int> m;
    ListNode* temp = head;
    int pos = 0;
    while (temp != 0) {
        if (m[temp] >= 1)
            break;
        else {
            m[temp]++;
            pos++;
        }
        temp = temp->next;
    }
    return temp;
}