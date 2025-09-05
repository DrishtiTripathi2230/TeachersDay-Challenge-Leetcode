#Bear and Big Brother - Codeforces 791A
Problem Description
Bear Limak wants to become larger than his brother Bob. Initially, Limak weighs a and Bob weighs b (1 ≤ a ≤ b ≤ 10). Each year, Limak's weight triples while Bob's weight doubles. Determine after how many full years Limak's weight becomes strictly greater than Bob's weight.

Problem Link: https://codeforces.com/problemset/problem/791/A

-----

##Solution Approach
*Read the initial weights a (Limak) and b (Bob).

*Use a loop to simulate the yearly weight changes:

*Multiply Limak's weight by 3 each year.

*Multiply Bob's weight by 2 each year.

*Count the number of years required until Limak's weight strictly exceeds Bob's weight.

*Output the year count.

------


##Explanation

The solution uses a simple loop to simulate the weight changes each year. 
Limak's weight triples and Bob's weight doubles annually. 
The loop continues until Limak's weight is strictly greater than Bob's weight,
counting the number of iterations (years) needed. The final count is printed as the result.


------
##Complexity

Time Complexity: O(log(b)) since the weights grow exponentially.

Space Complexity: O(1) as only a few variables are used.
