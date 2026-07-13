/*
=========================================================
Problem: Odd or Even Sum
Platform: HCL GUVI CodeKata
Difficulty: Easy

Problem Statement:
Given two integers N and M, find their sum and determine
whether the sum is odd or even.

Input:
Two integers N and M.

Output:
Print "odd" if the sum is odd.
Print "even" if the sum is even.

Sample Input:
9 2

Sample Output:
odd

Algorithm:
1. Start.
2. Read two integers N and M.
3. Calculate sum = N + M.
4. Check if sum % 2 == 0.
5. If true, print "even".
6. Otherwise, print "odd".
7. End.
=========================================================
*/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    int sum = n + m;

    if (sum % 2 == 0) {
        cout << "even";
    } else {
        cout << "odd";
    }

    return 0;
}
