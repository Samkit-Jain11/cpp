# if-else Statement in C++

## Definition
- The if-else statement is used for decision making.
- It executes a block of code based on a condition.

---

## Syntax

if (condition) {
    // code if condition is true
}
else {
    // code if condition is false
}

---

## How It Works
- If the condition is **true**, the if block executes
- If the condition is **false**, the else block executes

---

## Example

int age = 18;

if (age >= 18) {
    cout << "Eligible to vote";
} else {
    cout << "Not eligible";
}

---

## Types of if Statements

### 1. Simple if
- Executes code only if condition is true

if (condition) {
    // code
}

---

### 2. if-else
- Chooses between two options

if (condition) {
    // code if true
} else {
    // code if false
}

---

### 3. else-if Ladder
- Used for multiple conditions

if (condition1) {
    // code
} else if (condition2) {
    // code
} else {
    // code
}

---

### 4. Nested if
- if inside another if

if (condition1) {
    if (condition2) {
        // code
    }
}

---

## Important Points
- Condition must return true or false
- Use curly braces {} for multiple statements
- Indentation improves readability
- else part is optional

---

## Example (else-if Ladder)

int marks = 85;

if (marks >= 90) {
    cout << "Grade A";
} else if (marks >= 75) {
    cout << "Grade B";
} else {
    cout << "Grade C";
}