# C++ Decisions & Iterations

This program demonstrates fundamental C++ concepts including data storage, decision-making structures, and iteration loops.

## Overview

The code showcases various programming constructs:

- **Data Storage**: Working with character data types and type casting
- **Decision Making**: Using if-else statements and switch cases
- **Iterations**: Implementing while and for loops

---

## Code Breakdown

### 1. Character Storage & Type Casting (main function)

```cpp
char c;
c = 'A';
cout << c << endl;           // Output: A
cout << (int) c << endl;     // Output: 65
```

**Explanation:**

- A character variable `c` is declared and assigned the value `'A'`
- `cout << c` prints the character: **A**
- `cout << (int) c` casts the character to an integer, showing its ASCII value: **65**
- This demonstrates type casting from `char` to `int`

---

### 2. iterations() Function

This function demonstrates two types of loops:

#### While Loop

```cpp
int i = 0;
while(i <= 10) {
    cout << i << " ";
    i++;
}
```

**Explanation:**

- Initializes `i` to 0
- Prints numbers 0-10 separated by spaces: **0 1 2 3 4 5 6 7 8 9 10**
- Increments `i` after each iteration until the condition `i <= 10` becomes false

#### For Loop with Continue Statement

```cpp
for(int i = 0; i <= 10; i++) {
    if(i == 2) {
        continue;  // Skips this iteration
    }
    cout << i << " ";
}
```

**Explanation:**

- A for loop that iterates from 0 to 10
- When `i == 2`, the `continue` statement skips the rest of that iteration
- Output: **0 1 3 4 5 6 7 8 9 10** (notice 2 is missing)
- `continue` is useful for skipping specific iterations without exiting the loop

---

### 3. test_switch() Function

```cpp
char grade = 'B';
int points;
switch(grade) {
    case 'A':
        points = 4;
        break;
    case 'B':
        points = 3;
        break;
    case 'C':
        points = 2;
        break;
    case 'D':
        points = 1;
        break;
    default:
        cout << "Invalid" << endl;
        points = 0;
}
cout << "Points: " << points << endl;
```

**Explanation:**

- Uses a `switch` statement to convert a grade character to points
- `grade` is set to `'B'`, so it matches `case 'B'` and `points` is set to 3
- The `break` statement exits the switch after matching case (prevents fall-through)
- The `default` case handles invalid grades
- Output: **Points: 3**

---

### 4. decisions() Function

```cpp
int age = 16;
if(age >= 18) {
    cout << "You can vote" << endl;
} else {
    cout << "You can't vote" << endl;
}
```

**Explanation:**

- Uses an if-else statement to make a decision based on age
- `age` is 16, which is less than 18
- The else block executes
- Output: **You can't vote**
- This demonstrates conditional logic and decision-making

---

### 5. cin_fn() Function

```cpp
int val;
cout << "Enter value: ";
cin >> val;
cout << "Value was: " << val << endl;
```

**Explanation:**

- Prompts the user to enter an integer value
- Reads user input from the console using `cin >>`
- Displays the entered value back to the user
- This demonstrates user input handling

---

## Program Execution

The `main()` function currently:

1. Creates a character variable and demonstrates type casting
2. Calls the `iterations()` function
3. Other functions are commented out but can be uncommented to test them

**Current Output:**

```
A
65
0 1 2 3 4 5 6 7 8 9 10
0 1 3 4 5 6 7 8 9 10
```

---

## Commented Functions

The following functions are commented out in `main()` but can be uncommented to test:

- `cin_fn()` - Interactive user input
- `decisions()` - Decision-making with if-else
- `test_switch()` - Switch statement demonstration

## Key Concepts Covered

| Concept      | Example                        | Purpose                                   |
| ------------ | ------------------------------ | ----------------------------------------- |
| Type Casting | `(int) c`                      | Convert between data types                |
| While Loop   | `while(i <= 10)`               | Repeat code while condition is true       |
| For Loop     | `for(int i = 0; i <= 10; i++)` | Repeat code for a fixed number of times   |
| Continue     | `continue;`                    | Skip current iteration and go to next     |
| If-Else      | `if(age >= 18)...else...`      | Execute different code based on condition |
| Switch       | `switch(grade)`                | Execute code based on multiple cases      |
| User Input   | `cin >> val;`                  | Read data from user                       |
