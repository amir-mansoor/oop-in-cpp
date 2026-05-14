#include <iostream>
using namespace std;

struct node {
    int val;
    node *next;
};

node* create_node(node *curr, int val) {
    node *n = new node;
    n->val = val;
    n->next = NULL;
    curr->next = n;
    return n;

}

void output_list(node *head) {
    node *curr = head;
    cout << "[";
    while(curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }

    cout << "]\n";

}

int main(){
    node *head,*curr;
    head->val = 0;
    head->next = NULL;
    curr = head;
    for(int i = 1; i < 10; i++) {
        curr = create_node(curr, i);
    }

    output_list(head);
    return 0;
}
