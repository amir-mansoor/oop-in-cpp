# Access Modifiers, Static Members, and Friends in C++

This folder demonstrates access control, static data members, static functions, and friend functions in C++.

## Overview

The example covers:

- private and public access specifiers
- static member variables and functions
- inheritance with protected members
- friend functions that can access private data

## Key Concepts

### 1. Access Modifiers

Access modifiers control how class members can be accessed.

```cpp
class Student {
private:
    int id;

public:
    static int next_id;
};
```

### 2. Static Members

A static member is shared by all objects of the class.

```cpp
static int next_id;

Student() {
    id = Student::inc_next_id();
}
```

### 3. Friend Functions

A friend function can access private members of a class even though it is not a member itself.

```cpp
friend void access_payrate_directly(Employee e);
```

### 4. Protected Members

The `protected` access modifier allows derived classes to access members directly.

```cpp
class Employee {
protected:
    int payrate;
};
```

## How to Run

Compile and execute the example:

```bash
g++ static.cpp -o output
./output
```

## Learning Goals

This section helps you understand:

- encapsulation with access modifiers
- static behavior in classes
- the purpose of friend functions
- protected members in inheritance
