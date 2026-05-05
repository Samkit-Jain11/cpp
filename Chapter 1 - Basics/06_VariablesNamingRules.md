# Variable Naming Rules in C++

## 1. Allowed Characters
- Letters (A–Z, a–z)
- Digits (0–9)
- Underscore (_)

## 2. Starting Character
- Must start with a **letter** or **underscore (_)**  
- Cannot start with a **digit**

Example:
- Valid: age, _count  
- Invalid: 2num  

## 3. No Spaces Allowed
- Variable names cannot contain spaces  

Example:
- Valid: my_age  
- Invalid: my age  

## 4. Case Sensitive
- C++ is case-sensitive  
- age and Age are different variables  

## 5. Cannot Use Keywords
- Reserved words cannot be used  

Example:
- Invalid: for, return, int  

## 6. Meaningful Names (Best Practice)
- Use descriptive names  

Example:
- Bad: x  
- Good: totalMarks  

## 7. Length of Variable
- No fixed limit  
- Keep it short and readable  

## 8. Special Characters Not Allowed
- Only underscore (_) is allowed  
- No other symbols  

Example:
- Invalid: total$, num@1  

## Examples

### Valid Names
- marks  
- total_sum  
- _value  
- num1  

### Invalid Names
- 1num (starts with digit)  
- my-age (contains special character)  
- for (keyword)  
- total sum (space)  