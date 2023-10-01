/*Given two arrays(A and B) of the same size n, find the length of the longest range [l,r] such that the subarrays Al,Al+1…Ar and Bl,Bl+1…Br are permutations of each other.

Two arrays are said to be permutations of each other, if you can rearrange the elements of the first array to obtain the second array.

An equivalent definition is that the number of occurrences of every number should be equal in both arrays.

If there does not exist such a range [l,r] then print 0.

Input
First line contains a single integer T, the number of testcases

First line of each testcase contains a single integer n, the size of each array

Second line of each testcase contains n space separated integers, the elements of the array A
Third line of each testcase contains n space separated integers, the elements of the array B
Output
Print a single line for each testcase, the answer to the question.
Constraints
1≤T≤100
1≤n≤50
−109≤Ai,Bi≤109
Sample Input
3
3
1 2 3
4 5 6
3
1 2 3
3 1 2
4
1 2 3 5
3 2 5 3
Sample Output
0
3
3
Explanation
The first test case has different elements in both arrays, so no such range exists and so the answer is 0.

In the second test case the entire arrays are a permutations of each other so the answer is 3.

For the third test case "2 3 5" and "2 5 3" are permutations of each other so the answer is 3.*/
