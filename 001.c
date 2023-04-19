//
//  001.c
//  practice
//
//  Created by Szél Balázs on 2023. 04. 19..
//

#include "001.h"

int main() {
    int num, i, is_prime = 1;
    
    printf("Enter an integer:\n");
    scanf("%d", &num);
    
    // Check if num is prime
    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            is_prime = 0; // Not prime
            break;
        }
    }
    
    if(num == 1) {
        printf("1 is not a prime number.\n");
    }
    else if(is_prime) {
        printf("%d is a prime number.\n", num);
    }
    else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
