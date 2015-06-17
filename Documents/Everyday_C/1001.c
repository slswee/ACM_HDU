//  Created by Xin Li on 1/24/15.
//  Copyright (c) 2015 Xin Li. All rights reserved.
/* 1001
 * In this problem, your task is to calculate SUM(n) = 1 + 2 + 3 + ... + n.
 * The input will consist of a series of integers n, one integer per line.
 * Output: For each case, output SUM(n) in one line, followed by a blank line. You may assume the resuilt will be in the range of 32-bit signed integer.
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    int a;
    int sum = 0;
    
    while(scanf("%d", &a) != EOF) {
    
        int i;
        sum = 0;
       
        for (i=0; i<=a; i++) {
            sum = sum + i;
        }
    
    printf("%d\n\n", sum);
    
    }
    
    return 0;
}

