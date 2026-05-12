# Formal and Actual Parameters in C++

# Parameters in Functions

## Definition
- Parameters are variables used to pass data between functions.

---

# 1. Formal Parameters

## Definition
- Parameters written in function definition are called formal parameters.
- They receive values from actual parameters during function call.

---

## Example

```cpp
int add(int a, int b) {
    return a + b;
}
```

Here:
- `a` and `b` are formal parameters.

---

# 2. Actual Parameters

## Definition
- Values or variables passed during function call are called actual parameters.
- They provide data to formal parameters.

---

## Example

```cpp
add(10, 20);
```

Here:
- `10` and `20` are actual parameters.

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

# Explanation

```cpp
add(10, 20);
```

- `10` and `20` → Actual Parameters

```cpp
int add(int a, int b)
```

- `a` and `b` → Formal Parameters

---

# Important Points
- Actual parameters send values
- Formal parameters receive values
- Number and type of parameters should match
- Formal parameters are local to function

---

# Difference Between Formal and Actual Parameters

| Feature | Formal Parameters | Actual Parameters |
|---|---|---|
| Location | Function definition | Function call |
| Purpose | Receive values | Send values |
| Example | int a, int b | 10, 20 |

---

# Viva Questions

1. What are formal parameters?  
   → Parameters present in function definition

2. What are actual parameters?  
   → Values passed during function call

3. Where are formal parameters declared?  
   → Inside function definition

4. Which parameters send values to function?  
   → Actual parameters

5. Are formal parameters local variables?  
   → Yes