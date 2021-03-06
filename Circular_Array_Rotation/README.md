# Circular Array Rotation
## Problem From HackerRank
**link**: https://www.hackerrank.com/challenges/circular-array-rotation/problem
<br /><br />John Watson performs an operation called a right circular rotation on an array of integers, [a<sub>0</sub>, a<sub>1</sub>, a<sub>2</sub> ....., a<sub>n-1</sub>]. After performing one right circular rotation operation, the array is transformed from [a<sub>0</sub>, a<sub>1</sub>, a<sub>2</sub> ....., a<sub>n-1</sub>] to [a<sub>n-1</sub>, a<sub>0</sub>, a<sub>1</sub> ....., a<sub>n-2</sub>].<br /><br />Watson performs this operation **k** times.  To test Sherlock's ability to identify the current element at a particular position in the rotated array, Watson asks **q** queries, where each query consists of a single integer, **m**, for which you must print the element at index **m** in the rotated array (i.e., the value of a<sub>m</sub>).<br />
## Input Format
The first line contains **3** space-separated integers, **n**, **k**, and **q**, respectively.
<br />The second line contains **n** space-separated integers, where each integer **i** describes array element a<sub>i</sub> (where 0≤i<n).
<br />Each of the **q** subsequent lines contains a single integer denoting **m**.
## Output Format
For each query, print the value of the element at index **m** of the rotated array on a new line.

### Sample Input
3 2 3
<br />1 2 3
<br />0
<br />1
<br />2
### Sample Ouput
2
<br />3
<br />1
