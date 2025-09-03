📘 Day 28 – Codeforces 66B: Petya and Countryside  

🔗 [Problem Link](https://codeforces.com/problemset/problem/66/B)  

---

## ✅ Problem  
Given heights of garden sections, find the maximum number of sections that can be watered if rain is created above exactly one section.  
Water flows left and right while the next section’s height is not greater than the current one.  

---

## 📝 Approach  
- Simulate rainfall starting at each section.  
- Expand left while non-increasing.  
- Expand right while non-increasing.  
- Count watered sections.  
- Track the maximum.


---

##⚡ Complexity

Time: O(n²)

Space: O(n)


---

🏆 Result

✔ Accepted on Codeforces
⏱ 124 ms | 💾 100 KB
