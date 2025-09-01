# 📘 Day 26 – Codeforces 96A: Football  

🔗 [Click here to view the problem](https://codeforces.com/problemset/problem/96/A)  

---

## ✅ Problem Statement:  

You are given a string of characters 0 and 1, representing players of two football teams standing in a line.  

A situation is considered *dangerous* if there are *at least 7 consecutive players* from the same team.  

- Print *"YES"* if the situation is dangerous.  
- Otherwise, print *"NO"*.  

---

## 🧠 Logic Explained:  

1. Read the input string.  
2. Initialize a counter to 1 for consecutive characters.  
3. Loop through the string:  
   - If the current character equals the previous one → increment the counter.  
   - If the counter reaches *7* → print "YES" and exit.  
   - Otherwise, reset the counter to 1 when characters differ.  
4. If the loop ends without finding 7 in a row → print "NO".  

---

## 🕒 Time and Space Complexity:  

- *Time Complexity:* O(n) – single traversal of the string.  
- *Space Complexity:* O(1) – only one counter variable used.  

---

## ✅ Example Output:  

<img width="165" height="327" alt="image" src="https://github.com/user-attachments/assets/3a5a5d5e-85b8-414c-876e-62597a7125b5" />
