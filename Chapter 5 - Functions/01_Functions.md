# Functions in C++

## Definition
- A function is a block of code that performs a specific task.
- Functions help in code reusability and reduce repetition.

---

# Advantages of Functions
- Reduces code duplication
- Makes program modular
- Improves readability
- Easier debugging and maintenance

---

# Types of Functions

1. Library Functions  
2. User-defined Functions  

---

# 1. Library Functions

## Definition
- Predefined functions provided by C++ libraries.

## Examples
- sqrt()
- pow()
- strlen()
- cout

---

# 2. User-defined Functions

## Definition
- Functions created by the programmer according to requirement.

---

# Parts of a Function

1. Function Declaration  
2. Function Definition  
3. Function Call  

---

# Function Declaration

## Definition
- Tells compiler about function name, return type, and parameters.

## Syntax

```cpp
return_type function_name(parameters);
```

## Example

```cpp
int add(int, int);
```

---

# Function Definition

## Definition
- Contains actual code of the function.

## Syntax

```cpp
return_type function_name(parameters) {
    // code
}
```

## Example

```cpp
int add(int a, int b) {
    return a + b;
}
```

---

# Function Call

## Definition
- Invokes or executes the function.

## Example

```cpp
sum = add(10, 20);
```

---

# Complete Program Example

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {

    int result;

    result = add(10, 20);

    cout << "Sum = " << result;

    return 0;
}
```

---

# Types of User-defined Functions

1. Function with no arguments and no return value  
2. Function with arguments and no return value  
3. Function with no arguments and return value  
4. Function with arguments and return value  

---

# 1. No Arguments and No Return Value

```cpp
#include <iostream>
using namespace std;

void display() {
    cout << "Hello";
}

int main() {

    display();

    return 0;
}
```

---

# 2. Arguments and No Return Value

```cpp
#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << a + b;
}

int main() {

    add(10, 20);

    return 0;
}
```

---

# 3. No Arguments and Return Value

```cpp
#include <iostream>
using namespace std;

int number() {
    return 10;
}

int main() {

    cout << number();

    return 0;
}
```

---

# 4. Arguments and Return Value

```cpp
#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {

    cout << multiply(5, 4);

    return 0;
}
```

---

# Return Statement

## Definition
- `return` sends value back to calling function.

## Example

```cpp
return a + b;
```

---

# Void Function

## Definition
- A function with `void` return type does not return any value.

## Example

```cpp
void show() {
    cout << "Hello";
}
```

---

# Important Points
- `main()` is also a function
- Function name should be meaningful
- Functions improve program structure
- Parameters receive values during function call

---

# Viva Questions

1. What is a function?  
   → A block of code that performs a specific task

2. Why are functions used?  
   → To reduce code repetition and improve modularity

3. What is function declaration?  
   → Tells compiler about function before use

4. What is return statement?  
   → Sends value back to calling function

5. What is a void function?  
   → Function that returns no value

6. Which function is compulsory in C++ program?  
   → main()

7. Can a function return multiple values directly?  
   → No