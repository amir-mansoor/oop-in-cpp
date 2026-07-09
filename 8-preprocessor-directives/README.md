# Preprocessor Directives in C++

This folder explains how the C++ preprocessor works before compilation.

## Overview

The example demonstrates:

- macro definitions with `#define`
- function-like macros
- conditional compilation with `#ifdef` and `#endif`

## Key Concepts

### 1. Macros

Macros are used to define constants or small code snippets.

```cpp
#define SIZE 5
#define ABS(a) ((a) < 0 ? -(a) : (a))
```

### 2. Conditional Compilation

The preprocessor can include or exclude parts of the code based on conditions.

```cpp
#define INCLUDE_INVENTORY_MODULE

#ifdef INCLUDE_INVENTORY_MODULE
void show_inventor() {
    cout << "Shwoing inventory" << endl;
}
#endif
```

This is useful when building different versions of a program.

## How to Run

Compile and execute the file:

```bash
g++ main.cpp -o output
./output
```

## Learning Goals

You will learn about:

- compile-time code control
- using macros effectively
- conditional inclusion of code blocks
