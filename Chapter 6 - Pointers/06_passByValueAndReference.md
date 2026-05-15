# Pass by Value and Pass by Reference in C++

# 1. Pass by Value

## Definition
- In pass by value, a copy of the actual parameter is passed to the function.
- Changes made inside the function do not affect original variables.

---

## Syntax

```cpp
function(data_type variable);
```

---

## Example

```cpp
#include <iostream>
using namespace std;

void change(int x) {

    x = 50;

    cout << "Inside Function: " << x << endl;
}

int main() {

    int a = 10;

    change(a);

    cout << "Outside Function: " << a;

    return 0;
}
```

---

## Output

```cpp
Inside Function: 50
Outside Function: 10
```

---

## Explanation
- Copy of variable `a` is passed to function
- Original value remains unchanged

---

# 2. Pass by Reference

## Definition
- In pass by reference, reference/address of actual parameter is passed to the function.
- Changes inside the function affect original variable.

---

## Syntax

```cpp
function(data_type &variable);
```

---

## Example

```cpp
#include <iostream>
using namespace std;

void change(int &x) {

    x = 50;

    cout << "Inside Function: " << x << endl;
}

int main() {

    int a = 10;

    change(a);

    cout << "Outside Function: " << a;

    return 0;
}
```

---

## Output

```cpp
Inside Function: 50
Outside Function: 50
```

---

## Explanation
- Reference of `a` is passed
- Original variable gets modified

---

# Difference Between Pass by Value and Pass by Reference

| Feature | Pass by Value | Pass by Reference |
|---|---|---|
| Data Passed | Copy of variable | Reference/address |
| Effect on Original Variable | No change | Changes occur |
| Memory Usage | More | Less |
| Safety | Safer | Less safe |

---

# Important Points
- `&` symbol is used in pass by reference
- Pass by value creates separate copy
- Pass by reference directly works on original variable

---

# Advantages of Pass by Value
- Original data remains safe
- Prevents accidental modification

---

# Advantages of Pass by Reference
- Faster execution
- Saves memory
- Allows modification of original variable

---

# Viva Questions

1. What is pass by value?  
   → Passing copy of variable to function

2. What is pass by reference?  
   → Passing reference/address of variable

3. Which symbol is used in pass by reference?  
   → &

4. Which method changes original variable?  
   → Pass by reference

5. Which method is safer?  
   → Pass by value