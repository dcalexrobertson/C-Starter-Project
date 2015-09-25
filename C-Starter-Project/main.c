//
//  main.c
//  C-Starter-Project
//
//  Created by Daniel Mathews on 2015-02-02.
//  Copyright (c) 2015 com.lighthouse-labs. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //FizzBuzz Assignment by Alex Robertson
    
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0 && i % 3 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else {
            printf("%d\n", i);
        }
    }
    
    printf("Hello, World!\n");
    return 0;
}
