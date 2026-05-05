# Hierarchy of Operators in C++

## Definition
- Operator hierarchy (precedence) defines the order in which operators are evaluated in an expression.

---

## Operator Precedence (Highest to Lowest)

| Level | Operators                          | Description                    |
|------|------------------------------------|--------------------------------|
| 1    | (), []                             | Parentheses, Array indexing    |
| 2    | ++, --                             | Increment, Decrement           |
| 3    | *, /, %                            | Multiplication, Division, Mod  |
| 4    | +, -                               | Addition, Subtraction          |
| 5    | <, <=, >, >=                       | Relational operators           |
| 6    | ==, !=                             | Equality operators             |
| 7    | &&                                 | Logical AND                    |
| 8    | \|\|                               | Logical OR                     |
| 9    | =                                  | Assignment                     |

---

## Associativity
- If operators have same precedence, associativity decides the order

### Left to Right
- Most operators follow this  
Example: +, -, *, /

### Right to Left
- Assignment operators  
Example: =

---

## Examples

### Example 1
int result = 10 + 5 * 2;

- Step 1: 5 * 2 = 10  
- Step 2: 10 + 10 = 20  

Final Answer: 20

---

### Example 2
int result = (10 + 5) * 2;

- Step 1: (10 + 5) = 15  
- Step 2: 15 * 2 = 30  

Final Answer: 30

---

## Important Points
- Parentheses () have highest priority  
- Use brackets to avoid confusion  
- Follow BODMAS rule  
- Wrong precedence can give wrong output  