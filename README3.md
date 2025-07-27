📘 Day 3 – Leetcode 125: Valid Palindrome

🔗 [Click here to view the problem](https://leetcode.com/problems/valid-palindrome/description/)


---
## ✅ Problem Statement:

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward.

Given a string s, return true if it is a palindrome, or false otherwise.

---
## 🧠 Logic Explained:

1.Initialize an empty string cleaned.

2.Loop through each character in the input string s:

.If it's alphanumeric, convert it to lowercase and add to cleaned.

3.Once cleaned is ready, check if it’s a palindrome:

.Compare characters from the beginning and end, moving inward.

.If any pair doesn’t match → return false.

4.If all pairs match → return true.

---

🕒 Time and Space Complexity:

Time Complexity: O(n)

We go through the string twice — once to clean it, once to check palindrome.

Space Complexity: O(n)

Due to the cleaned string we create.

---

output:

<img width="528" height="56" alt="image" src="https://github.com/user-attachments/assets/44939019-7a51-439e-b9ee-8d20cccc2164" />



