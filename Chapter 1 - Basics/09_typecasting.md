# Typecasting in C++

## Definition
- Typecasting means converting one data type into another.

---

## Types of Typecasting

### 1. Implicit Typecasting (Automatic)
- Done automatically by the compiler
- Converts smaller data type to larger data type

Example:
int a = 10;
float b = a;   // int → float

---

### 2. Explicit Typecasting (Manual)
- Done by the programmer
- Used when we want specific conversion

Example:
int a = 10;
float b = (float)a;

---

## Types of Explicit Typecasting

### 1. C-Style Casting
- Old method

Example:
float b = (float)a;

---

### 2. C++ Style Casting

#### a) static_cast
- Used for normal conversions
- Safe and commonly used

Example:
float b = static_cast<float>(a);

---

#### b) dynamic_cast
- Used with pointers and inheritance
- Used for runtime type checking

---

#### c) const_cast
- Used to add or remove const property

---

#### d) reinterpret_cast
- Used for low-level casting
- Not commonly used (unsafe)

---

## Important Points
- Implicit casting is automatic and safe
- Explicit casting is manual and gives control
- Avoid unnecessary typecasting
- Wrong casting can lead to data loss

---

## Examples

### Implicit Casting
int x = 5;
double y = x;

### Explicit Casting
double x = 10.5;
int y = (int)x;   // Output: 10