# 📘 Day 10 – Codeforces VK Cup 2012: A. Next Round

🔗 [Click here to view the problem](https://codeforces.com/problemset/problem/158/A)

---
## ✅ Problem Statement:

In a contest, any participant who scores equal to or greater than the k-th place participant and has a positive score advances to the next round.
You're given the scores of n participants in non-increasing order. Determine how many participants move to the next round.

---
## 🧠 Logic Explained:

1.Input n and k (total participants and k-th position).

2.Input an array scores of size n, which is already sorted in non-increasing order.

3.Find the score of the participant at the k-th position (1-based index).

4.Loop through the scores:

.If a score is greater than or equal to the k-th score and is positive, count the participant.

5.Output the count.

---

🕒 Time and Space Complexity:

Time Complexity: O(n) – one traversal of the list.

Space Complexity: O(n) – for storing the scores.

---



