//FuzzBizzNezz Assignment by Alex Robertson

#include <stdio.h>

void fuzzBizzNezz(int fuzz, int bizz, int nezz);

int main(int argc, const char * argv[]) {
    
    int fuzz, bizz, nezz;
    
    printf("Please enter a number: ");
    scanf("%d", &fuzz);
    
    printf("Please enter a second number: ");
    scanf("%d", &bizz);
    
    printf("Please enter a third number: ");
    scanf("%d", &nezz);
    
    fuzzBizzNezz(fuzz, bizz, nezz);
    
    return 0;
}

void fuzzBizzNezz(int fuzz, int bizz, int nezz) {
    
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
}

    

