#include <iostream>
using namespace std;

struct node {
    int val;
    node *next;
};

node* create_node(node *current,int val) {
    node *n;
    n = new node;
    n->val = val;
    n->next = NULL;
    current->next = n;
    return n;
}

void show_list(node *h) {
    // cout << current->next << endl;
    node *current = h;
    cout << "[";
    while(current != NULL) {
        // cout << 
        cout << current->val << " ";
        current = current->next;
    }
    cout << "]" << endl;
}

void sum_list(node *h) {
    // cout << current->next << endl;
    int sum = 0;
    node *current = h;
    cout << "[";
    while(current != NULL) {
        // cout << 
        // cout << current->val << " ";
        sum += current->val;
        current = current->next;
    }
    cout << sum;
    cout << "]" << endl;
}

void delete_after_node(node *current) {
    node *temp;
    temp = current->next;
    current->next = current->next->next;
    delete temp;
}

int main() {
    node *head;
    node *current;

    head = new node;
    head->val = 1;
    head->next = NULL;
    current = head;
    // cout << current->val << endl;
    current = create_node(current, 2);
    current = create_node(current, 3);
    current = create_node(current, 4);
    // cout << current->val << endl;
    show_list(head);
    current = head;
    current = head->next;
    cout << "Going to delete current->val: " << current->val << endl;
    delete_after_node(head);
    show_list(head);
    sum_list(head);

    return 0;
}