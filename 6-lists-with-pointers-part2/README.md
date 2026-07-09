# Linked Lists in C++

This folder introduces the idea of a linked list using pointers. A linked list is a data structure where each node contains data and a pointer to the next node.

## Overview

The program demonstrates:

- creating a node structure
- linking nodes together
- traversing a list
- deleting a node from the list
- summing the values in the list

## Key Concepts

### 1. Node Structure

Each node stores a value and a pointer to the next node.

```cpp
struct node {
    int val;
    node *next;
};
```

### 2. Creating Nodes

A function creates a new node and links it to the current one.

```cpp
node* create_node(node *curr, int val) {
    node *n = new node;
    n->val = val;
    n->next = NULL;
    curr->next = n;
    return n;
}
```

### 3. Traversing the List

The list is printed by starting from the head and moving through each node using `next`.

```cpp
void output_list(node *head) {
    node *curr = head;
    while(curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
}
```

### 4. Deleting a Node

The program also shows how a node can be removed from the list by reconnecting the pointers.

```cpp
void delete_node(node *current) {
    node *temp = current->next;
    current->next = current->next->next;
    delete temp;
}
```

## How to Run

Compile and run the example:

```bash
g++ linked-list.cpp -o output
./output
```

## Learning Goals

This section helps you understand:

- linked list basics
- pointer-based data structures
- node creation and traversal
- dynamic memory management in lists
