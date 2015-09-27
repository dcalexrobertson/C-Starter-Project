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

    //FuzzBizzNezz Assignment by Alex Robertson    
    
    int fuzz;
    int bizz;
    int nezz;
    
    printf("Please enter a number: ");
    scanf("%d", &fuzz);
    
    printf("Please enter a second number: ");
    scanf("%d", &bizz);
    
    printf("Please enter a third number: ");
    scanf("%d", &nezz);
    
    for (int i = 1; i <= nezz; i++) {
        if (i % bizz == 0 && i % fuzz == 0) {
            printf("FuzzBizz\n");
        } else if (i % bizz == 0) {
            printf("Bizz\n");
        } else if (i % fuzz == 0) {
            printf("Fuzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}


    

