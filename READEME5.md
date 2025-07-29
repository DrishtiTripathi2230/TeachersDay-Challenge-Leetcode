# 📘 Day 5 – Leetcode 13: Roman to Integer

🔗 [Click here to view the problem](https://leetcode.com/problems/roman-to-integer/description/)

---
## ✅ Problem Statement:

Roman numerals are represented by seven different symbols:

Symbol	Value
I	1
V	5
X	10
L	50
C	100
D	500
M	1000

Given a Roman numeral string s, convert it to an integer.

Roman numerals are usually written from largest to smallest left to right. But if a smaller value comes before a larger value (like IV = 4), it should be subtracted.

---
## 🧠 Logic Explained:

1.Use a fixed-size array value[128] to store the integer value of each Roman character based on its ASCII value.

2.Initialize total = 0.

3.Loop through each character in the string:

. the current character is less than the next character, subtract its value.

.Otherwise, add its value.

4.Return the final total.

This method avoids maps and uses direct array access for faster performance.

---

🕒 Time and Space Complexity:

Time Complexity: O(n) —We loop once through the string.

Space Complexity: O(n) — Fixed array of size 128 is constant space.

---

output:

<img width="290" height="105" alt="image" src="https://github.com/user-attachments/assets/07670188-e92a-4368-894b-ba2c3edf450a" />



