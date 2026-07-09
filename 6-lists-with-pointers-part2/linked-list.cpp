#include <iostream>
using namespace std;

struct node {
    int val;
    node *next;
};

void delete_node(node *current) {
    node *temp = current->next;
    current->next = current->next->next;
    delete temp;
}

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


void sum_list(node *head) {
    node *curr = head;
    int sum = 0;
    while(curr != NULL) {
        sum += curr->val;
        curr = curr->next;

    }
    cout << "Sum is: " << sum << endl;

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
    curr = head->next;
    sum_list(head);
    cout << "Going to delete: " << curr->val << endl;
    delete_node(head);
    output_list(head);
    return 0;
}
