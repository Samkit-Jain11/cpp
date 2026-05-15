# Pointers in C++

## Definition
- A pointer is a variable that stores the address of another variable.

---

# Pointer Declaration

## Syntax

```cpp
data_type *pointer_name;
```

## Example

```cpp
int *ptr;
```

---

# Address Operator (&)

## Definition
- `&` is used to get address of a variable.

## Example

```cpp
int a = 10;

cout << &a;
```

---

# Pointer Initialization

## Example

```cpp
int a = 10;

int *ptr = &a;
```

Here:
- `a` → normal variable
- `&a` → address of variable
- `ptr` → stores address of `a`

---

# Dereference Operator (*)

## Definition
- `*` is used to access value stored at an address.

## Example

```cpp
cout << *ptr;
```

---

# Complete Program Example

```cpp
#include <iostream>
using namespace std;

int main() {

    int a = 10;

    int *ptr = &a;

    cout << "Value of a: " << a << endl;

    cout << "Address of a: " << &a << endl;

    cout << "Pointer stores: " << ptr << endl;

    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}
```

---

# Output Example

```cpp
Value of a: 10
Address of a: 0x61ff08
Pointer stores: 0x61ff08
Value using pointer: 10
```

---

# Important Points
- Pointer stores memory address
- `&` gives address of variable
- `*` accesses value at address
- Pointer type should match variable type

---

# Null Pointer

## Definition
- A pointer that points to nothing.

## Example

```cpp
int *ptr = NULL;
```

---

# Pointer to Pointer

## Definition
- A pointer that stores address of another pointer.

## Example

```cpp
int a = 10;

int *ptr = &a;

int **ptr2 = &ptr;
```

---

# Advantages of Pointers
- Dynamic memory allocation
- Efficient memory usage
- Used in arrays, functions, linked lists, trees

---

# Disadvantages of Pointers
- Difficult to understand initially
- Wrong usage may cause crashes
- Risk of memory leaks

---

# Difference Between Normal Variable and Pointer

| Feature | Normal Variable | Pointer |
|---|---|---|
| Stores | Value | Address |
| Example | int a = 10 | int *ptr = &a |

---

# Viva Questions

1. What is a pointer?  
   → Variable that stores address of another variable

2. Which operator gives address of variable?  
   → &

3. Which operator accesses value from address?  
   → *

4. What is null pointer?  
   → Pointer pointing to nothing

5. Can pointer store address of different data type?  
   → No, types should match