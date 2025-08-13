# 📘 Day 20 – Codeforces 41A: Translation

🔗 [View Problem on Codeforces](https://codeforces.com/problemset/problem/41/A)

---

## ✅ Problem Statement

The translation from the Berland language into the Birland language is not an easy task.  
A Berlandish word differs from a Birlandish word with the same meaning only in that it is spelled (and pronounced) **in reverse**.

For example:  
- `"code"` → `"edoc"` ✅ Correct translation  
- `"abb"` → `"aba"` ❌ Incorrect translation  

You are given:
- **s** → Berlandish word  
- **t** → Vasya’s translated word into Birlandish  

Determine if **t** is exactly **s** written backwards.

---

### Input
- First line: string `s` (Berlandish word)  
- Second line: string `t` (translated word)  
- Words consist of lowercase Latin letters only.  
- Length ≤ 100.

### Output
- Print `"YES"` if `t` is the reverse of `s`.  
- Otherwise print `"NO"`.

---

## 🧠 Approach

1. **Check lengths**: If lengths differ, they can’t be reverses.  
2. **Compare characters**: For each index `i` in `s`, check if `s[i] == t[length-1-i]`.  
3. **Decision**: If all match, output `"YES"`, else `"NO"`.

---


