//
//  main.cpp
//  memoization
//
//  Created by Grant Rosario on 3/21/17.
//  Copyright © 2017 Grant Rosario. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

long int fib(int n, long int memo[]) {
    if (n <= 0) return 0;
    else if (n == 1) return 1;
    else if (memo[n] > 0) return memo[n];
    
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}


int main() {
    
    int n = 50;
    long int memo[51] = {};
    for (int i = 0; i < n; i++) {
        printf("%d : %ld\n", i, fib(i, memo));
    }
    printf("\n");
    
    
}
