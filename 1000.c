//
//  main.c
//  aplusb1
//
//  Created by Xin Li on 1/24/15.
//  Copyright (c) 2015 Xin Li. All rights reserved.
//

/*
 * Problem description: calculate A+B
 * Input: Each line will contain two integers A and B. Process to end of file.
 
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
    
        printf("%d\n", a + b);
    }
    
    return 0;
}

