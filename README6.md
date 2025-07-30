# 📘 Day 6 – Leetcode 20: Valid Parentheses

🔗 [Click here to view the problem](https://leetcode.com/problems/valid-parentheses/)

---
## ✅ Problem Statement:

Given a string s containing just the characters '(', ')', '{', '}', '[', and ']', determine if the input string is valid.

An input string is valid if:

1.Open brackets must be closed by the same type of brackets.

2.Open brackets must be closed in the correct order.

3.Every close bracket must have a corresponding open bracket..

---
## 🧠 Logic Explained:

1.Initialize an empty stack of characters.

2.Loop through each character c in the input string s:

.If c is an opening bracket ((, {, [), push it to the stack.

.If c is a closing bracket:

 .If the stack is empty, return false (no matching opening).

 .Pop the top character from the stack.

 .If the popped character doesn't match the closing bracket, return false.

3.After the loop, if the stack is empty, return true (all brackets matched).
Otherwise, return false (some brackets were never closed).

---

🕒 Time and Space Complexity:

Time Complexity: O(n) —each character is processed once..

Space Complexity: O(n) — stack can hold up to all opening brackets.

---

input:

<img width="354" height="176" alt="image" src="https://github.com/user-attachments/assets/3b3c2795-2e7d-4e04-9078-87bd67d1c51b" />

output:

<img width="232" height="129" alt="image" src="https://github.com/user-attachments/assets/ed88b8f5-6e8b-4ebc-b076-8d0612086df1" />



