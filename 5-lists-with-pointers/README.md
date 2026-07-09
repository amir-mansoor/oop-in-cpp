# Lists with Pointers in C++

This folder demonstrates how pointers can be used with structures to work with dynamically allocated objects.

## Overview

The example shows:

- how to define a structure with member variables
- how to access structure data through a pointer
- how to create objects dynamically using `new`
- how to release memory using `delete`

## Key Concepts

### 1. Struct and Pointer

A structure can be used to group related data, and a pointer can point to that structure.

```cpp
struct Student {
    int rollno;
    string name;
};

Student s1;
Student *s;
s = &s1;
```

This allows access to the structure members either with `(*s).name` or `s->name`.

### 2. Dynamic Allocation

The program uses `new` to create a Student object at runtime.

```cpp
s = new Student;
s->name = "Sannan";
s->rollno = 10;
```

### 3. Memory Cleanup

When the dynamically created object is no longer needed, `delete` is used to free the memory.

```cpp
delete s;
```

## How to Run

Compile and execute the program:

```bash
g++ main.cpp -o output
./output
```

## Learning Goals

By studying this example, you will understand:

- pointer arithmetic with structures
- dynamic memory allocation
- safe memory management with `new` and `delete`
