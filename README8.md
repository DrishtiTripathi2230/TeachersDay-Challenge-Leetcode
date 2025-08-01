# 📘 Day 8 – Codeforces 71A: Way Too Long Words

🔗 [Click here to view the problem](https://codeforces.com/problemset/problem/71/A)

---
## ✅ Problem Statement:

Sometimes some words like "localization" or "internationalization" are too long to write in full.

To abbreviate such words, we use the following rule:

.Replace the middle letters with the count of letters in between.

.So, localization → l10n, internationalization → i18n.

You are given n words. For each word, if it’s length is more than 10, abbreviate it. Otherwise, print it as it is.

---
## 🧠 Logic Explained:

1.Read the number of words n.

2.For each word:

.If the word length is ≤ 10, print it directly.

.Otherwise:

  .Print the first character.

  .Print the number of characters between first and last (length - 2).

  .Print the last character.

---

🕒 Time and Space Complexity:

Time Complexity: O(n) — one pass per word.

Space Complexity: O(1) — no extra space used besides input strings.

---




