# Loops in C++

## Definition
- Loops are used to execute a block of code repeatedly until a condition becomes false.
- They help reduce repetition in programs.

# Types of Loops in C++

1. for loop  
2. while loop  
3. do-while loop  

# 1. For Loop

## Definition
- A for loop is used when the number of iterations is known.

## Syntax

```cpp
for(initialization; condition; update) {
    // code
}
```

## Working
1. Initialization executes once
2. Condition is checked
3. If condition is true → loop body executes
4. Update statement executes
5. Steps repeat until condition becomes false

## Example

```cpp
#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    return 0;
}
```

## Output

```cpp
1
2
3
4
5
```

# 2. While Loop

## Definition
- A while loop executes as long as the condition remains true.
- Mostly used when number of iterations is unknown.

## Syntax

```cpp
while(condition) {
    // code
}
```

## Example

```cpp
#include <iostream>
using namespace std;

int main() {

    int i = 1;

    while(i <= 5) {
        cout << i << endl;
        i++;
    }

    return 0;
}
```

## Output

```cpp
1
2
3
4
5
```

# 3. Do-While Loop

## Definition
- A do-while loop executes the code first and checks condition later.
- It executes at least one time.

## Syntax

```cpp
do {
    // code
} while(condition);
```

## Example

```cpp
#include <iostream>
using namespace std;

int main() {

    int i = 1;

    do {
        cout << i << endl;
        i++;
    } while(i <= 5);

    return 0;
}
```

## Output

```cpp
1
2
3
4
5
```

# Difference Between Loops

| Feature | for loop | while loop | do-while loop |
|---|---|---|---|
| Condition Check | Beginning | Beginning | End |
| Minimum Execution | 0 times | 0 times | 1 time |
| Best Use | Known iterations | Unknown iterations | Menu-driven programs |

# Infinite Loop

## Definition
- A loop that never ends because the condition never becomes false.

## Example

```cpp
for(;;) {
    cout << "Infinite Loop";
}
```

# Loop Control Statements

## 1. Break Statement
- Terminates the loop immediately.

### Example

```cpp
for(int i = 1; i <= 5; i++) {

    if(i == 3)
        break;

    cout << i << endl;
}
```

## Output

```cpp
1
2
```

## 2. Continue Statement
- Skips current iteration and moves to next iteration.

### Example

```cpp
for(int i = 1; i <= 5; i++) {

    if(i == 3)
        continue;

    cout << i << endl;
}
```

## Output

```cpp
1
2
4
5
```

# Advantages of Loops
- Reduces code repetition
- Makes programs shorter and cleaner
- Saves time and effort

# Disadvantages of Loops
- Infinite loops may crash program
- Complex loops can reduce readability

# Viva Questions

1. Which loop executes at least once?  
   → do-while loop

2. Which loop is best for fixed iterations?  
   → for loop

3. What causes an infinite loop?  
   → Condition never becomes false

4. What is the use of break statement?  
   → Exits loop immediately

5. What is the use of continue statement?  
   → Skips current iteration

6. Which loop checks condition at the end?  
   → do-while loop