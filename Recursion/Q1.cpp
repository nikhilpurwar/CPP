// Problem Statement
// Given a staircase of N steps and you can either climb 1 or 2 steps at a given time. The task is to return the count of distinct ways to climb to the top.
// Note: The order of the steps taken matters.

// Examples:

// Input: N = 3
// Output: 3
// Explanation:

// There are three distinct ways of climbing a staircase of 3 steps :

// [1, 1, 1], [2, 1] and [1, 2].


// Another axample
// Input:  N = 2
// Output: 2
// Explanation:

// There are two distinct ways of climbing a staircase of 3 steps :

// [1, 1] and [2].


#include<bits/stdc++.h>
using namespace std;
int stair(int n)
{
    
    if(n<=1) 
    {
        if(n==0) return 0;
        return 1;
    }
    return(stair(n-1)+stair(n-2));
}
int main()
{
    int noOfstair;
    cin>>noOfstair;
    cout<<stair(noOfstair);
    return 0;
}