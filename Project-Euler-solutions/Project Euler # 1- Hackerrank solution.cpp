/*Project Euler # 1- Hackerrank solution

Problem Statement

This problem is a programming version of Problem 1 from projecteuler.net

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below N.

Input Format 
First line contains T that denotes the number of test cases. This is followed by T lines, each containing an integer, N.

Output Format 
For each test case, print an integer that denotes the sum of all the multiples of 3 or 5 below N.

Constraints 
1≤T≤10^5 
1≤N≤10^9

Logic for this code is available at my website: 
http://soli1411.altervista.org/project-euler-1-hackerrank-solution-c/  
*/

//Code

/*
____made by____
           _
 ___  ___ | (_)
/ __|/ _ \| | |
\__ \ (_) | | |
|___/\___/|_|_|
_______________*/

#include<iostream>
using namespace std;

long long foo(long long n, int t)
{
	return (t + (n - 1) / t * t) *((n - 1) / t) / 2;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		cout << foo(n, 3) + foo(n, 5) - foo(n, 15) << endl;
	}
	return 0;
}
