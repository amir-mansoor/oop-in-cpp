# Introduction to Classes in C++

This folder introduces the basic idea of classes and objects in C++.

## Overview

The example shows:

- how to define a class
- how to declare member functions
- how to create objects
- how to call member functions through objects and pointers

## Key Concepts

### 1. Class Definition

A class groups data and functions together.

```cpp
class Employee {
public:
    string name;
    void sign_in();
    void sign_out();
};
```

### 2. Member Function Definitions

Member functions are defined outside the class using the scope resolution operator `::`.

```cpp
void Employee::sign_in() {
    cout << "signing in: " << endl;
}
```

### 3. Objects and Pointers

Objects can be created directly or dynamically.

```cpp
Employee emp;
emp.sign_in();

Employee *e = new Employee;
e->sign_in();
```

## How to Run

Compile and run the example:

```bash
g++ class.cpp -o output
./output
```

## Learning Goals

This section helps you understand:

- class syntax
- data and behavior grouping
- object creation and access
- member function implementation
