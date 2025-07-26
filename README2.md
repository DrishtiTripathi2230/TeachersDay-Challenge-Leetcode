# 📘 Day 2 – Leetcode 412: FizzBuzz

🔗 [Click here to view the problem](https://leetcode.com/problems/fizz-buzz/)

---
## ✅ Problem Statement:

Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.

answer[i] == "Fizz" if i is divisible by 3.

answer[i] == "Buzz" if i is divisible by 5.

answer[i] == i (as a string) if none of the above conditions are true.

---
## 🧠 Logic Explained:

1.Initialize an empty string vector result.

2.Loop from 1 to n:

 .If the current number is divisible by both 3 and 5, add "FizzBuzz" to the result.

 .Else if divisible by 3 only, add "Fizz".

 .Else if divisible by 5 only, add "Buzz".

 .Else, convert the number to string using to_string(i) and add it.

3.Return the final result vector.

---

🕒 Time and Space Complexity:
Time Complexity: O(n) — we iterate from 1 to n once.

Space Complexity: O(n) — to store the result in a string array/vector.


