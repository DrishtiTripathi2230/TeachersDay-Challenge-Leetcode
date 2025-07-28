# 📘 📘 Day 4 – Leetcode 1: Two Sum

🔗 [Click here to view the problem](https://leetcode.com/problems/two-sum/description/)

---
## ✅ Problem Statement:

Given an integer array nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.


---
## 🧠 Logic Explained:

1.Use a nested loop (brute force approach):

.Loop through each element i in the array.

.For each i, loop through every element j after i (j > i).

.Check if nums[i] + nums[j] == target.

.If yes, return [i, j].

2.If no pair is found, return an empty vector (though problem guarantees a solution).

---

🕒 Time and Space Complexity:

Time Complexity: O(n²) — due to nested loops checking every pair.

Space Complexity: O(1) — no extra space used besides variables and the output..

---

input:

<img width="443" height="57" alt="image" src="https://github.com/user-attachments/assets/e7a07284-2040-40c1-add2-e6f7b7e07aa1" />

output:

<img width="68" height="33" alt="image" src="https://github.com/user-attachments/assets/4f656315-3588-4641-9034-f73a1e3e88cf" />

