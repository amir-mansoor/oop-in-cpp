# File Handling in C++

This folder demonstrates how to read and write files in both text and binary modes.

## Overview

The program covers:

- writing text to a file using `ofstream`
- reading text from a file using `ifstream`
- writing binary data using `write()`
- reading binary data using `read()`

## Key Concepts

### 1. Text File Handling

Text files store characters in a readable format.

```cpp
ofstream fout;
fout.open("sample.txt");
fout << "my test line..." << endl;
fout.close();
```

### 2. Binary File Handling

Binary files store data in raw form, which is useful for structured data like arrays.

```cpp
ofstream fout("data.bin", ios::binary);
fout.write((char *)&pixels[i][j], sizeof(int));
```

### 3. Reading Back Data

The same data can be loaded back from the file using `read()`.

```cpp
ifstream fin("data.bin", ios::binary);
fin.read((char *)&pixels[i][j], sizeof(int));
```

## How to Run

Compile and execute the program:

```bash
g++ filehandling.cpp -o output
./output
```

## Learning Goals

This section teaches:

- file input/output in C++
- text vs binary file operations
- handling data streams with `fstream`
