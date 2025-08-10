# 📘 Day 17 – Codeforces 266A: Stones on the Table  

🔗 [Click here to view the problem](https://codeforces.com/problemset/problem/266/A)  

---

## ✅ Problem Statement:  

There are **n** stones on the table in a row. Each stone can be red (`R`), green (`G`), or blue (`B`).  

You must find the **minimum number of stones to remove** so that no two neighboring stones have the same color. Stones are considered neighbors if there are no other stones between them.  

---

## 🧠 Logic Explained:  

1. Read `n` (number of stones) and `s` (string of stone colors).  
2. Initialize a counter `removals = 0`.  
3. Loop through the string from the first stone to the second-last stone:  
   - If the current stone `s[i]` is the same as the next stone `s[i+1]`, increment `removals` by 1.  
4. Print `removals` as the result.  

---

## 🕒 Time and Space Complexity:  

- **Time Complexity:** O(n) — we check each stone once.  
- **Space Complexity:** O(1) — only a counter variable is used.

---

## output:
<img width="917" height="581" alt="image" src="https://github.com/user-attachments/assets/e272ac10-61ab-448a-a5bc-a91a6a13e926" />


