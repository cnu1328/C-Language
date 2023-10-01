/*I'm too tired to write a story, so I'll get to the problem straight away.

Given a string of length N, find if we can make the string sorted by performing at most one swap. A swap involves taking any two characters present in the string and interchanging their positions in the string.

A string is sorted if all letter 'a' appear before all letter 'b', all letter 'b' appear before all letter 'c' and so on.

Input:
First line will contain T, the number of testcases. Then the testcases follow.
Each testcase consists of two lines, the first line containing a single integer N denoting the length of the string, and the second line containing the string.
Output:
For each test case, print "YES" (without quotes) if you can make the string sorted using at most one swap, otherwise print "NO" (without quotes).

Constraints
1≤T≤10
2≤N≤100
The string consists of lowercase english letters only.
Subtasks
28% points : 2≤N≤3
72% points : Original Constraints
Sample Input:
2
4
acbd
4
adbc
Sample Output:
YES
NO
EXPLANATION:
For the first test, we can swap 'c' and 'b' to obtain "abcd" which is a sorted string.
For the second test, we cannot obtain a sorted string using at most one swap.*/
