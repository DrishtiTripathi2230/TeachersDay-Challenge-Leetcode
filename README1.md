# 📘 Day 1 – Leetcode 1295: Find Numbers with Even Number of Digits

🔗 [Problem Link](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/)

---
## ✅ Problem Statement:

Given an array `nums` of integers, return how many of them contain **an even number of digits**.

---
## 🧠 Logic Explained:

- Iterate through the given array of integers.
- For each number:
  - Use a `while(num > 0)` loop to count how many digits it has.
  - In each iteration, divide the number by 10 and increment a counter.
- After counting the digits, check if the count is even using `digitCount % 2 == 0`.
- If true, increment a `result` counter.
- Finally, return the value of `result`.

---
