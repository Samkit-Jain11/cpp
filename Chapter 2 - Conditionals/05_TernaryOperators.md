# Ternary Operator in C++

## Definition
- The ternary operator is a shorthand form of if-else.
- It is also called the conditional operator.

---

## Syntax

condition ? expression1 : expression2;

- If condition is true → expression1 executes
- If condition is false → expression2 executes

---

## Example 1: Find Greater Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    (a > b) ? cout << "A is greater" : cout << "B is greater";

    return 0;
}