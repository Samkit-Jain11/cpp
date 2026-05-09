# Break and Continue Statements in C++

# 1. Break Statement

## Definition
- The `break` statement is used to immediately terminate a loop or switch statement.

---

## Syntax

```cpp
break;
```

---

## Working
- When `break` executes:
  - Loop stops immediately
  - Control moves outside the loop

---

## Example in Loop

```cpp
#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 5; i++) {

        if(i == 3)
            break;

        cout << i << endl;
    }

    return 0;
}
```

---

## Output

```cpp
1
2
```

---

## Example in Switch

```cpp
#include <iostream>
using namespace std;

int main() {

    int n = 2;

    switch(n) {

        case 1:
            cout << "One";
            break;

        case 2:
            cout << "Two";
            break;

        default:
            cout << "Invalid";
    }

    return 0;
}
```

---

# 2. Continue Statement

## Definition
- The `continue` statement skips the current iteration and moves to the next iteration of the loop.

---

## Syntax

```cpp
continue;
```

---

## Working
- When `continue` executes:
  - Remaining code inside current iteration is skipped
  - Next iteration starts immediately

---

## Example

```cpp
#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 5; i++) {

        if(i == 3)
            continue;

        cout << i << endl;
    }

    return 0;
}
```

---

## Output

```cpp
1
2
4
5
```

---

# Difference Between Break and Continue

| Feature | break | continue |
|---|---|---|
| Function | Stops loop completely | Skips current iteration |
| Control Goes To | Outside loop | Next iteration |
| Used In | Loops and switch | Loops only |

---

# Important Points
- `break` terminates loop completely
- `continue` only skips one iteration
- Both are loop control statements
- `break` is commonly used in switch statements

---

# Viva Questions

1. What is the use of break statement?  
   → Terminates loop immediately

2. What is the use of continue statement?  
   → Skips current iteration

3. Can break be used in switch statement?  
   → Yes

4. Does continue terminate the loop?  
   → No

5. Which statement moves control outside the loop?  
   → break