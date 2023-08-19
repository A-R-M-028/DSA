#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL; //0
    }

    Node(int data) {
        this->data = data;
        this->next = NULL; // 0
    }
};

Node* mergeLists(Node* list1, Node* list2) {
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

void print(Node* head) {
    Node*temp = head;

    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {
    Node* head1 = new Node(10);
    Node* second1 = new Node(20);
    Node* third1 = new Node(30);
    Node* fourth1 = new Node(40);
    Node* fifth1 = new Node(50);

    head1->next=second1;
    second1->next=third1;
    third1->next=fourth1;
    fourth1->next=fifth1;
    // fifth1->next=NULL; Automatically NULL

    Node* head2 = new Node(60);
    Node* second2 = new Node(70);
    Node* third2 = new Node(80);
    Node* fourth2 = new Node(90);
    Node* fifth2 = new Node(100);

    head2->next=second2;
    second2->next=third2;
    third2->next=fourth2;
    fourth2->next=fifth2;

    Node* ansHead = mergeLists(head1, head2);
    print(ansHead);

    return 0;
}