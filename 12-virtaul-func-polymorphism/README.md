# Virtual Function and Polymorphism Example

This simple C++ project demonstrates object-oriented programming with abstract classes, virtual functions, and runtime polymorphism.

## Overview

The code defines a base plugin interface `Plugin` with a pure virtual method `apply_filter(int a[5][5])`. Two concrete plugin classes implement this interface:

- `MakeItWhite` — sets every pixel value in a 5x5 matrix to `255`
- `MakeItBlack` — sets every pixel value in a 5x5 matrix to `0`

A matrix is initialized with sample values, and a selected plugin is used to modify the matrix at runtime.

## What it demonstrates

- Abstract base class (`Plugin`)
- Pure virtual function (`apply_filter`)
- Runtime polymorphism using a base-class pointer
- Derived classes overriding virtual behavior
- Simple matrix initialization and output

## How to build

Use a C++ compiler such as `g++`:

```bash
g++ -std=c++17 main.cpp -o virtual_filter_example
```

## How to run

```bash
./virtual_filter_example
```

## Output

The program prints the matrix before and after applying the selected plugin.
