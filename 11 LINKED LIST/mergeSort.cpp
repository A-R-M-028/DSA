/*
ListNode* findMid(ListNode* head){
    //Using fast and slow

    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast-> != 0){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* merge(Node* list1, Node* list2) {
    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;

    Node* ans = new Node(-1);
    Node* mptr = ans;

    while(list1 && list2) {
        if(list1->data <= list2->data){
            mptr->next = list1;
            mptr = list1;
            list1=list1->next;
        }
        else{
            mptr->next = list2;
            mptr = list2;
            list2 = list2->next;
        }
    }
    if(list1) {
        mptr->next = list1;
    }
    if(list2) {
        mptr->next = list2;
    }

    return ans->next;
}

ListNode* sortList(ListNode* head){
    if(head == 0 && head->next == 0) return head;

    //Breadk into half using mid
    ListNode* mid = findMid(head);
    ListNode* left = head;
    ListNode* right = mid->next;
    mid->next = null;

    //Sort using RE
    left = sortList(left);
    right = sortList(right);
    
    //Now merge it
    ListNode* mergedList = merge(left, right);
    return mergedList;
}




*/