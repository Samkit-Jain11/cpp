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

    x = 100;

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
Inside Function: 100
Outside Function: 10
```

---

## Explanation
- Copy of `a` is passed to function
- Original variable remains unchanged

---

# 2. Pass by Reference

## Definition
- In pass by reference, reference/address of actual parameter is passed to function.
- Changes made inside function affect original variable.

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

    x = 100;

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
Inside Function: 100
Outside Function: 100
```

---

## Explanation
- Reference of `a` is passed
- Original variable gets modified

---

# Difference Between Pass by Value and Pass by Reference

| Feature | Pass by Value | Pass by Reference |
|---|---|---|
| What is Passed | Copy of variable | Reference/address of variable |
| Effect on Original Variable | No change | Changes occur |
| Memory Usage | More | Less |
| Safety | Safer | Less safe |

---

# Advantages of Pass by Value
- Original data remains safe
- Avoids accidental modification

---

# Advantages of Pass by Reference
- Faster execution
- Saves memory
- Allows modification of original data

---

# Important Points
- `&` symbol is used in pass by reference
- Pass by value creates separate copy
- Pass by reference works on original variable

---

# Viva Questions

1. What is pass by value?  
   → Copy of variable is passed to function

2. What is pass by reference?  
   → Reference/address of variable is passed

3. Which symbol is used in pass by reference?  
   → &

4. Which method changes original variable?  
   → Pass by reference

5. Which method is safer?  
   → Pass by value