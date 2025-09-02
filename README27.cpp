# 📘 Day 27 – Codeforces Challenge

## Problem Solved: Drinks – Codeforces 200B
- 🔗 [Problem Link](https://codeforces.com/problemset/problem/200/B)  
- *Language:* C++  
- *Runtime:* 122 ms  
- *Memory:* 0 KB  


### Problem Statement
Little Vasya loves orange juice very much. He has n drinks in his fridge, each containing a certain percentage of orange juice. He decided to make a cocktail by mixing equal proportions of all drinks. The task is to calculate the percentage of orange juice in the final cocktail.

### Input
- First line: integer n (1 ≤ n ≤ 100) — number of drinks.  
- Second line: n integers p_i (0 ≤ p_i ≤ 100) — percentage of orange juice in each drink.  

### Output
- Print the percentage of orange juice in Vasya's cocktail. The answer is correct if the absolute or relative error does not exceed 10^-4.


  ### Explanation

This problem requires calculating the percentage of orange juice in a cocktail made by mixing n drinks, each containing a certain percentage of orange juice. Since Vasya mixes equal parts of all drinks, the final percentage is simply the *average of all the individual percentages*.

*Steps to solve:*
1. Read the number of drinks n and the percentage of orange juice in each drink.
2. Calculate the total sum of all percentages.
3. Divide the sum by n to get the average percentage in the cocktail.
4. Print the result with high precision using fixed and setprecision.

*Why this works:*
- Mixing equal volumes of liquids is equivalent to averaging their concentrations.
- The solution runs in O(n) time and uses O(1) extra space.

*Example:*
- Input: 3 drinks with percentages 50 50 100
- Total: 50 + 50 + 100 = 200
- Average: 200 / 3 = 66.666666666667
- Output: 66.666666666667


