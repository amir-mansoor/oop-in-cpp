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

int main() {
    node *n;
    node *current;
    n = NULL;
    n = new node;
    n->val = 1;
    n->next = NULL;
    // n->next = new node;
    // n->next->next = NULL;
    current = new node;
    n->next = current;
    current->val = 5;
    current->next = NULL;
    create_node(current,2);
    return 0;
}