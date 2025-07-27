ListNode *detectCycle(ListNode *head) {
    ListNode* fastRunner = head;
    ListNode* slowRunner = head;

    while (fastRunner && fastRunner->next){
        slowRunner = slowRunner->next;
        fastRunner = fastRunner->next->next;

        if (slowRunner == fastRunner){  //cycle detected in list
            slowRunner = head; // point of collision and slowRunner are now equidistant
            while (slowRunner != fastRunner){
                slowRunner = slowRunner->next;
                fastRunner = fastRunner->next;
            }
            return slowRunner;
        }
    }

    return NULL;
}