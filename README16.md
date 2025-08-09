# 📘 Day 16 – Codeforces 263A: Beautiful Matrix

🔗 [Click here to view the problem](https://codeforces.com/contest/263/problem/A)

---

## ✅ Problem Statement:

You are given a 5×5 matrix consisting of 24 zeroes and a single number one. You can perform moves to swap neighboring rows or neighboring columns.

The matrix looks “beautiful” if the single number one is located in the middle cell (row 3, column 3).

Calculate the minimum number of moves required to make the matrix beautiful.

---

## 🧠 Logic Explained:

1. Read the 5×5 matrix input and find the row and column indices of the element ‘1’.

2. Calculate the Manhattan distance between the found position and the center position (2,2 in zero-based indexing):

   - `moves = abs(row - 2) + abs(column - 2)`

3. Print the minimum number of moves needed.

---

## 🕒 Time and Space Complexity:

- Time Complexity: O(1) — fixed 5×5 matrix iteration.

- Space Complexity: O(1) — constant extra space.

---


## Output Example:
<img width="511" height="528" alt="image" src="https://github.com/user-attachments/assets/efe746a7-7652-4457-bd5a-a9f40c2ded3b" />


