# Inheritance and Overriding in C++

This folder introduces inheritance and method overriding, which are core concepts of object-oriented programming.

## Overview

The example shows:

- how one class can inherit from another
- how to define a base class and a derived class
- how to override a method in the derived class
- how to use pointers to objects of derived types

## Key Concepts

### 1. Base Class and Derived Class

A derived class can reuse the properties and behavior of a base class.

```cpp
class Shape {
public:
    int num_points;
    Point *points;
    float get_area();
};

class Triangle : public Shape {
public:
    float get_area();
};
```

### 2. Overriding Methods

The `Triangle` class overrides the `get_area()` method from `Shape`.

```cpp
float Triangle::get_area() {
    return 1.0;
}
```

### 3. Using Inherited Members

The derived class can use the members defined in the base class and extend them.

```cpp
Triangle *t = new Triangle;
t->set_points(points_of_triangle);
t->show_shape();
```

## How to Run

Compile and execute the example:

```bash
g++ main.cpp -o output
./output
```

## Learning Goals

This section helps you understand:

- inheritance syntax
- method overriding
- reusing base-class functionality in derived classes
